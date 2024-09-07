#include <stdio.h>
#include <stdlib.h>

int main()
{
    //====CHALLENGE 1===========================================




    /*int T[5] = {1,2,3,4,5};
    for(int i=0 ; i<5 ; i++){
        printf("T[%d] = %d \n", i , T[i]);
    }*/




    //====CHALLENGE 2===========================================





    /*int taille ;
    printf("Taille du Tableau : ");
    scanf("%d", &taille);

    int T[taille];


    //Saisi
    for(int i=0 ; i<5 ; i++){
        printf("T[%d] = ", i );
        scanf("%d", &T[i]);
    }



    //Affichage
    printf("\nAffichage --------------------\n");
    for(int i=0 ; i<5 ; i++){
        printf("T[%d] = %d \n", i, T[i]);
    }*/




    //====CHALLENGE 3===========================================





    /*int taille , S ;
    printf("Taille du Tableau : ");
    scanf("%d", &taille);

    int T[taille] ;


    //Saisi
    for(int i=0 ; i<taille ; i++){
        printf("T[%d] = ", i );
        scanf("%d", &T[i]);
    }



    //Calcul de la Somme
    S = 0 ;
    for(int i=0 ; i<taille ; i++){
        S+=T[i];
    }
    printf("\nSomme = %d\n", S);*/




    //====CHALLENGE 4===========================================




    /*int taille , max ;
    printf("Taille du Tableau : ");
    scanf("%d", &taille);

    int T[taille] ;


    //Saisi
    for(int i=0 ; i<taille ; i++){
        printf("T[%d] = ", i );
        scanf("%d", &T[i]);
    }



    //Identification du Max
    max = T[0] ;
    for(int i=1 ; i<taille ; i++){
        if(T[i]>max)
            max = T[i];
    }
    printf("\nMax = %d\n", max);*/





    //====CHALLENGE 5===========================================



    /*int taille , min ;
    printf("Taille du Tableau : ");
    scanf("%d", &taille);

    int T[taille] ;


    //Saisi
    for(int i=0 ; i<taille ; i++){
        printf("T[%d] = ", i );
        scanf("%d", &T[i]);
    }



    //Identification du Min
    min = T[0] ;
    for(int i=1 ; i<taille ; i++){
        if(T[i]<min)
            min = T[i];
    }
    printf("\nMin = %d\n", min);*/





    //====CHALLENGE 6===========================================





    /*int taille , facteur ;
    printf("Taille du Tableau : ");
    scanf("%d", &taille);

    int T[taille] ;


    //Saisi
    for(int i=0 ; i<taille ; i++){
        printf("T[%d] = ", i );
        scanf("%d", &T[i]);
    }


    printf("Entrer le Nombre facteur : ");
    scanf("%d", &facteur);


    //Multiplication par Facteur
    for(int i=0 ; i<taille ; i++){
        printf("%d * %d = %d\n", T[i] , facteur , T[i]*facteur );
    }*/





    //====CHALLENGE 7===========================================




    /*int taille , temp;
    printf("Taille du Tableau : ");
    scanf("%d", &taille);

    int T[taille] ;


    //Saisi
    for(int i=0 ; i<taille ; i++){
        printf("T[%d] = ", i );
        scanf("%d", &T[i]);
    }


    for(int i=0; i<taille ; i++){
        for(int j=i ; j<taille ; j++){
            if(T[i]>T[j]){
                temp = T[i] ;
                T[i] = T[j] ;
                T[j] = temp ;
            }
        }
    }

    printf("\nTableau Apres Tri : ------------------\n");
    for(int i=0 ; i<taille ; i++){
        printf("T[%d] = %d\n", i , T[i]);
    }*/





    //====CHALLENGE 8===========================================





    /*int taille ;
    printf("Taille du Tableau : ");
    scanf("%d", &taille);

    int T1[taille] ;
    int T2[taille] ;


    //Saisi
    for(int i=0 ; i<taille ; i++){
        printf("T1[%d] = ", i );
        scanf("%d", &T1[i]);
    }


    for(int i=0; i<taille ; i++){
        T2[i] = T1[i] ;
    }

    printf("\nTableau Copié : ------------------\n");
    for(int i=0 ; i<taille ; i++){
        printf("T2[%d] = %d\n", i , T2[i]);
    }*/




    //====CHALLENGE 9===========================================





    /*int taille , i ;
    printf("Taille du Tableau : ");
    scanf("%d", &taille);

    int T[taille] ;
    int invT[taille] ;


    //Saisi
    for(i=0 ; i<taille ; i++){
        printf("T[%d] = ", i );
        scanf("%d", &T[i]);
    }


    for(i=0 ; i<taille ; i++){
        invT[i] = T[taille-i-1] ;
    }




    printf("\nTableau Inverse : ------------------\n");
    for(i=0 ; i<taille ; i++){
        printf("T[%d] = %d\n", i , invT[i]);
    }*/




    //====CHALLENGE 10===========================================





    /*int taille , i , j , N , estPresent=0;
    printf("Taille du Tableau : ");
    scanf("%d", &taille);

    int T[taille] ;


    //Saisi
    for(i=0 ; i<taille ; i++){
        printf("T[%d] = ", i );
        scanf("%d", &T[i]);
    }

    printf("Entrer l'element a rechercher : ");
    scanf("%d", &N);


    for(i=0 ; i<taille ; i++){
        if(T[i]==N){
            estPresent = 1 ;
            break ;
        }
    }


    if(estPresent==0)
        printf("%d n'existe pas dans le Tableau !", N);
    else
        printf("%d existe dans le Tableau !", N);*/





    //====CHALLENGE 11===========================================





    /*int taille , i , j , A , B;
    printf("Taille du Tableau : ");
    scanf("%d", &taille);

    int T[taille] ;


    //Saisi
    for(i=0 ; i<taille ; i++){
        printf("T[%d] = ", i );
        scanf("%d", &T[i]);
    }

    printf("Entrer l'element a remplacer : ");
    scanf("%d", &A);

    printf("Entrer La Nouvelle Valeur : ");
    scanf("%d", &B);


    for(i=0 ; i<taille ; i++){
        if(T[i]==A){
            T[i] = B ;
        }
    }


    for(i=0 ; i<taille ; i++){
        printf("T[%d] = %d\n", i , T[i]);
    }*/





    //==== CHALLENGE 12 ===========================================






    /*int taille , i , j , A , B;
    printf("Taille du Tableau : ");
    scanf("%d", &taille);

    int T[taille] ;


    //Saisi
    for(i=0 ; i<taille ; i++){
        printf("T[%d] = ", i );
        scanf("%d", &T[i]);
    }

    printf("Les elements Pairs sont : \n");
    for(i=0 ; i<taille ; i++){
        if(T[i]%2==0){
             printf("T[%d] = %d\n", i , T[i]);;
        }
    }*/





    //====CHALLENGE 13===========================================





    /*int taille , i , j , A , B;
    printf("Taille du Tableau : ");
    scanf("%d", &taille);

    int T[taille] ;


    //Saisi
    for(i=0 ; i<taille ; i++){
        printf("T[%d] = ", i );
        scanf("%d", &T[i]);
    }

    printf("Les elements Impairs sont : \n");
    for(i=0 ; i<taille ; i++){
        if(T[i]%2!=0){
             printf("T[%d] = %d\n", i , T[i]);;
        }
    }*/




    //====CHALLENGE 14===========================================





    /*int taille , S , M;
    printf("Taille du Tableau : ");
    scanf("%d", &taille);

    int T[taille] ;


    //Saisi
    for(int i=0 ; i<taille ; i++){
        printf("T[%d] = ", i );
        scanf("%d", &T[i]);
    }



    //Calcul de la Somme
    S = 0 ;
    for(int i=0 ; i<taille ; i++){
        S+=T[i];
    }

    M = S/taille ;
    printf("La Moyenne est : %d .\n", M);*/






    //====CHALLENGE 15===========================================






    /*int taille1 , taille2 , i , j ;

    printf("Taille du Tableau 1 : ");
    scanf("%d", &taille1);
    printf("Taille du Tableau 2 : ");
    scanf("%d", &taille2);

    int A[taille1] ;
    int B[taille2] ;
    int F[taille1 + taille2] ;


    //Saisi

    printf("\nEntrer les elements du Tableau 1 : \n");
    for(i=0 ; i<taille1 ; i++){
        printf("A[%d] = ", i );
        scanf("%d", &A[i]);
    }

    printf("\nEntrer les elements du Tableau 2 : \n");
    for(i=0 ; i<taille2 ; i++){
        printf("B[%d] = ", i );
        scanf("%d", &B[i]);
    }


    for(i=0; i<taille1 ; i++)
        F[i] = A[i] ;

    for(i=taille1 , j=0 ; i<taille1+taille2 , j<taille2 ; i++ , j++)
        F[i] = B[j] ;

    for(i=0 ; i<taille1+taille2 ; i++){
        printf("F[%d] = %d\n", i , F[i]);
    }*/




    return 0;
}
