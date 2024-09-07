#include <stdio.h>
#include <stdlib.h>
#include <string.h>




//--CHALLENGE 1 ----------
struct Personne {
    char nom[50] ;
    char prenom[50] ;
    int age ;
};



//--CHALLENGE 2 ----------
struct Etudiant {
    char nom[50] ;
    char prenom[50] ;
    float note[5] ;
};



//--CHALLENGE 3 ----------
struct Rectangle {
    float longueur;
    float largeur ;
};


float Aire(struct Rectangle R){
    float aire ;
    aire = R.longueur * R.largeur ;

    return aire ;
}










int main()
{
    //===== CHALLENGE 1 ====================================================


    /*struct Personne P1 ;

    //Saisie
    printf("Entrer les donnees de la Personne : \n");
    printf("- Nom : ");
    scanf("%s", &P1.nom);
    printf("- Prenom : ");
    scanf("%s", &P1.prenom);
    printf("- Age : ");
    scanf("%d", &P1.age);


    //Affichage
    printf("\n\nEntrer les donnees de la Personne : \n");
    printf("- Nom : %s .\n", P1.nom);
    printf("- Prenom : %s .\n", P1.prenom);
    printf("- Age : %d .\n", P1.age);*/





    //===== CHALLENGE 2 ====================================================





    /*struct Etudiant E1 ;

    //Saisi
    printf("Entrer les donnees de l'Etudiant : \n");
    printf("- Nom : ");
    scanf("%s", &E1.nom);
    printf("- Prenom : ");
    scanf("%s", &E1.prenom);
    printf("- Notes : --------\n");
    for(int i=0 ; i<5 ; i++){
        printf(" * Note[%d] = ", i+1);
        scanf("%f", &E1.note[i]);
    }


    //Affichage
    printf("\n\nEntrer les donnees de la Personne : \n");
    printf("- Nom : %s .\n", E1.nom);
    printf("- Prenom : %s .\n", E1.prenom);
    printf("- Notes : --------\n");
    for(int i=0 ; i<5 ; i++ ){
        printf(" * Note[%d] = %.2f\n", i+1, E1.note[i]);
    }*/




    //===== CHALLENGE 3 ====================================================




    /*struct Rectangle R1 ;
    float aire ;

    printf("Entrer la longueur du Rectangle : ");
    scanf("%f", &R1.longueur);
    printf("Entrer la largeur du Rectangle : ");
    scanf("%f", &R1.largeur);

    aire=Aire(R1);
    printf("\nAire du Rectangle est : %.2f .\n", aire);*/







    return 0;
}
