#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    //==== CHALLENGE 1 =====================================================


    /*char str[20] ;
    char str2[20] ;

    //chaine da caracteres sans espaces
    /*printf("Entrer votre chaine de caracteres : ");
    scanf("%s", str);
    printf("\nLa chaine de caracteres entrees est : %s \n", str);*/


    //chaine da caracteres avec espaces
    /*printf("\nEntrer votre chaine de caracteres : ");
    gets(str2);
    printf("\nLa chaine de caracteres entrees est : ");
    puts(str2);*/




    //==== CHALLENGE 2 ======================================================




    /*char str[20] ;
    int longueur=0 ;
    printf("\nEntrer votre chaine de caracteres : ");
    scanf("%s", str);
    printf("\n%s\n", str);
    for(int i=0 ; str[i]!='\0' ; i++){
        longueur++ ;
    }
    printf("\nla longueur est : %d .\n", longueur);*/




    //==== CHALLENGE 3 ======================================================



    /*char str1[20] ;
    char str2[20] ;


    printf("\nEntrer votre chaine de caracteres 1 : ");
    gets(str1);
    printf("\nEntrer votre chaine de caracteres 2 : ");
    gets(str2);*/

    //en utilisant la fonction strcat()
    /*strcat(str1,str2);
    printf("les 2 chaines apres concatentaion : ");
    puts(str1);*/


    //sans utilisant la fonction strcat()
    /*for(int i=strlen(str1) , j=0 ; i<20 , j<strlen(str2)  ; i++ , j++){
        str1[i] = str2[j];
    }
    printf("les 2 chaines apres concatentaion : ");
    puts(str1);*/




    //==== CHALLENGE 4 ======================================================




    /*char str1[20] ;
    char str2[20] ;
    int estIdentique = 1 ;


    printf("\nEntrer votre chaine de caracteres 1 : ");
    gets(str1);
    printf("\nEntrer votre chaine de caracteres 2 : ");
    gets(str2);


    //en utilisant la fonction strcmp()
    if(strcmp(str1,str2)==0)
        printf("\nLes deux chaines sont identiques!\n");
    else
        printf("\nLes deux chaines sont differentes!\n");



    //sans utilisant la fonction strcmp()
    for(int i=0 , j=0 ; i<strlen(str1) , i<strlen(str2) ; i++ , j++){
        if(str1[i]!=str2[j]){
            estIdentique = 0 ;
            break;
        }
    }
    if(estIdentique==1)
        printf("\nLes deux chaines sont identiques!\n");
    else
        printf("\nLes deux chaines sont differentes!\n");*/




    //==== CHALLENGE 5 ======================================================




    /*char str[20];
    char rev[20] ;

    strlen(str) ;

    printf("\nEntrer votre chaine de caracteres : ");
    gets(str);

    printf("\nChaine Inverse : ");

    //en utilisant strrev()
    //printf("%s", strrev(str));

    //sans utilisant strrev()
    for(int i=strlen(str)-1 ; i>=0; i-- ){
        printf("%c", str[i]);
    }*/




    //==== CHALLENGE 6 ======================================================










    return 0;
}
