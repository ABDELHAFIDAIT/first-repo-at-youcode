#include <stdio.h>
#include <stdlib.h>
#include <string.h>





struct Contact {
    char nom[100];
    char tel[10] ;
    char email[100];
};





int main()
{
    struct Contact C[100] ;

    char recherche[100];
    char newTel[100];
    char newEmail[100];

    int posContact ;

    int contactExist = 0 ;

    int i ;

    int choix = 0 ;
    int indice = 0 ;

    while(choix!=6){
        printf("----------------------------------------\n");
        printf("   Menu des operations possibles\n");
        printf("----------------------------------------\n");
        printf("1 - Ajouter un nouveau contact.\n");
        printf("2 - Afficher tous les contacts.\n");
        printf("3 - Mettre à jour un contact.\n");
        printf("4 - Supprimer un contact.\n");
        printf("5 - Rechercher un contact.\n");
        printf("6 - Sortir.\n");
        printf("----------------------------------------\n\n");


        printf("\nChoisir l'operation a effectuer : ");
        scanf("%d", &choix);
        printf("\n\n");



        switch(choix){
            case 1 :
                printf("Remplir les infos du Contact : \n");
                printf("- Nom : ");
                scanf("%s", &C[indice].nom);
                printf("- Num Telephone : ");
                scanf("%s", &C[indice].tel);
                printf("- Adresse Email : ");
                scanf("%s", &C[indice].email);


                indice++ ;

                printf("\nContact cree avec Succes !\n\n");

                break ;

    //===============================================================================================
            case 2 :
                for(i=0; i<indice ; i++){
                    printf("\nContact %d : ================================\n", i+1);
                    printf("Nom : %s .\n", C[i].nom);
                    printf("Num Telephone : %s .\n", C[i].tel);
                    printf("Adresse Email : %s .\n", C[i].email);
                }

                printf("\n\n");
                break ;

    //===============================================================================================

            case 3 :
                printf("Entrer le Nom du Contact a Modifier : ");
                scanf("%s", recherche);
                printf("Entrer le nouveau Num de Tel : ");
                scanf("%s", newTel);
                printf("Entrer le nouveau Email : ");
                scanf("%s", newEmail);


                for(i=0 ; i<indice ; i++){
                    if(strcmp(recherche , C[i].nom)==0){
                        strcpy(C[i].tel,newTel);
                        printf("\nNum de Telephone est Modifie avec Succes!\n");
                        strcpy(C[i].email,newEmail);
                        printf("\nAdresse Email est Modifie avec Succes!");
                        break;
                    }
                }

                printf("\n\n");
                break ;

    //===============================================================================================

            case 4 :
                printf("Entrer le Nom du Contact a Supprimer : ");
                scanf("%s", recherche);
                for(i=0 ; i<indice ; i++){
                    if(strcmp(recherche , C[i].nom)==0){
                        posContact = i ;
                        break ;
                    }
                }
                for(i=posContact ; i<indice ; i++){
                    C[i] = C[i+1] ;
                }
                printf("Supression est effectue avec Succes !");
                indice--;
                printf("\n\n");
                break ;

    //===============================================================================================

            case 5 :
                printf("Entrer le Nom du Contact a Rechercher : ");
                scanf("%s", recherche);
                for(i=0 ; i<indice ; i++){
                    if(strcmp(recherche , C[i].nom)==0){
                        contactExist = 1 ;
                        printf("\nContact %d : ================================\n", i+1);
                        printf("Nom : %s .\n", C[i].nom);
                        printf("Num Telephone : %s .\n", C[i].tel);
                        printf("Adresse Email : %s .\n", C[i].email);
                        break;
                    }else
                        contactExist = 0 ;
                }
                if(contactExist==0)
                    printf("Le Contact n'existe pas!");

                printf("\n\n");
                break ;

    //===============================================================================================

            case 6 :
                break ;
    //===============================================================================================
            default :
                printf("Operation Indisponible !\n\n");
                break ;
        }


    }


    return 0;
}
