#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char auteur[100][100] ;
    char titre[100][100] ;
    float prix[100] ;
    int quantite[100] ;


    char rechTitre[100] ;
    int newQuant ;

    int totalQuant ;
    int posLivre ;

    int choix = 0 ;
    int indice = 0 ;
    int i ;


    while(choix!=6){
        printf("\n\nMenu des operations a effectuer :\n");
        printf("1 - Ajouter un livre au stock.\n");
        printf("2 - Afficher tous les livres disponibles.\n");
        printf("3 - Mettre à jour la quantité d'un livre.\n");
        printf("4 - Supprimer un livre du stock.\n");
        printf("5 - Afficher le nombre total de livres en stock.\n");
        printf("6 - Sortir.\n");

        printf("\nChoisir l'operation a effectuer : ");
        scanf("%d", &choix);

        printf("\n\n") ;


        switch(choix){
             case 1 :
                 printf("Entrer les donnees du livre %d : \n", indice+1);
                 printf("Titre : ");
                 scanf("%99s", titre[indice]);
                 printf("Auteur : ");
                 scanf("%99s", &auteur[indice]);
                 printf("Prix : ");
                 scanf("%f", &prix[indice]);
                 printf("Quantite : ");
                 scanf("%d", &quantite[indice]);

                 indice++ ;

                 printf("\nLivre est ajoute avec succes !");

                 break ;
             case 2 :
                 for(i=0; i<indice ; i++){
                    printf("\nLivre %d : -------------------------\n", i+1);
                    printf("Titre : %s .\n", titre[i]);
                    printf("Auteur : %s .\n", auteur[i]);
                    printf("Prix : %.2f .\n", prix[i]);
                    printf("Quantite : %d .\n", quantite[i]);
                 }

                 break ;
             case 3 :
                 printf("Entrer le Titre de Livre a chercher : ");
                 scanf("%s", rechTitre);
                 printf("Entrer la Nouvelle Quantite : ");
                 scanf("%d", &newQuant);
                 for(i=0 ; i<indice ; i++){
                    if(strcmp(rechTitre , titre[i])==0){
                        quantite[i] = newQuant ;
                        break ;
                    }
                 }
                 printf("Quantite est modifie avec Succes !");
                 break ;
             case 4 :
                 printf("Entrer le Titre de Livre a supprimer : ");
                 scanf("%s", rechTitre);
                 for(i=0 ; i<indice ; i++){
                    if(strcmp(rechTitre , titre[i])==0){
                        posLivre = i ;
                        break ;
                    }
                 }
                 for(i=0 ; i<=indice-posLivre ; i++){
                    strcpy(titre[posLivre+i] , titre[posLivre+i+1]); //equivalent a => titre[posLivre+i] = titre[posLivre+i+1];
                    strcpy(titre[posLivre+i] , titre[posLivre+i+1]); //equivalent a => auteur[posLivre+i] = auteur[posLivre+i+1];
                    prix[posLivre+i] = prix[posLivre+i+1];
                    quantite[posLivre+i] = quantite[posLivre+i+1];
                 }
                 printf("Supression est effectue avec succes !");
                 indice--;


                 break ;
             case 5 :
                 totalQuant = 0 ;
                 for(i=0 ; i<indice ; i++){
                    totalQuant+=quantite[i];
                 }
                 printf("La Quantite Totale des Livres est : %d .", totalQuant);
                 break ;
             case 6 :
                 break ;
             default:
                 printf("Choix Introuvable !");
                 break ;
        }
    }






    return 0;
}
