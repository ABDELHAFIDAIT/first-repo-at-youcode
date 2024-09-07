#include <stdio.h>
#include <stdlib.h>

int main()
{
    //## Exercices sur les Conditions ------------------





    /*int N ;
    printf("Enter un nombre : ");
    scanf("%d", &N);
    if(N%2==0)
        printf("%d est Pair !", N);
    else
        printf("%d est Impair !", N);*/





    // ===========================================================================================






    /*char carac ;
    printf("Entrer le caractere : ");
    scanf("%c", &carac);
    switch(carac){
        case 'a' :
            printf("'%c' est une voyelle !\n", carac);
            break ;
        case 'e' :
            printf("'%c' est une voyelle !\n", carac);
            break ;
        case 'i' :
            printf("'%c' est une voyelle !\n", carac);
            break ;
        case 'o' :
            printf("'%c' est une voyelle !\n", carac);
            break ;
        case 'u' :
            printf("'%c' est une voyelle !\n", carac);
            break ;
        case 'y' :
            printf("'%c' est une voyelle !\n", carac);
            break ;

        default:
            printf("'%c' n'est pas une voyelle !\n", carac);
            break ;
    }*/





    // ===========================================================================================





    /*int N1, N2, R;
    printf("Entrez le premier nombre entier: ");
    scanf("%d", &N1);
    printf("Entrez le deuxième nombre entier: ");
    scanf("%d", &N2);
    if (N1 == N2) {
        R = 3 * (N1 + N2);
    } else {
        R = N1 + N2;
    }
    printf("Le resultat est: %d\n", R);*/





    // ===========================================================================================









    /*int a, b , c  , delta ;
    float x1 , x2 ;
    printf("\tax^2 + bx + c\n\n");
    do{
        printf("Entrer le Coefficient a : ");
        scanf("%d", &a);
    }while(a==0);
    printf("Entrer le Coefficient b : ");
    scanf("%d", &b);
    printf("Entrer le Coefficient c : ");
    scanf("%d", &c);
    printf("\n\n\tNotre equation est : \t%d(x^2) + %dx + %d\n\n", a, b, c);
    delta = pow(b,2) - 4*a*c ;
    if(delta<0)
        printf("L'equation n'admet pas de Solution !\n");
    else if(delta == 0){
        x1 = (-b) /(2*a) ;
        printf("L'equation admet une seule Solution :   %.2f  .\n", x1);
    }else{
        x1 = (-b-sqrt(delta)) /(2*a) ;
        x2 = (-b+sqrt(delta)) /(2*a) ;
        printf("L'equation admet deux Solutions :   %.2f   et   %.2f  .\n", x1, x2);
    }*/





    // ===========================================================================================





    /*int choix;
    int annee;
    int mois, jours, heures, minutes, secondes;
    printf("Entrez le nombre d'annees: ");
    scanf("%d", &annee);
    printf("Choisissez une conversion:\n");
    printf("1. Convertir en Mois\n");
    printf("2. Convertir en Jours\n");
    printf("3. Convertir en Heures\n");
    printf("4. Convertir en Minutes\n");
    printf("5. Convertir en Secondes\n");
    printf("Entrez votre choix (1-5): ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            mois = annee * 12;
            printf("%d année(s) = %d mois\n", annee, mois);
            break;
        case 2:
            jours = annee * 365;
            printf("%d année(s) = %d jours\n", annee, jours);
            break;
        case 3:
            heures = annee * 365 * 24;
            printf("%d année(s) = %d heures\n", annee, heures);
            break;
        case 4:
            minutes = annee * 365 * 24 * 60;
            printf("%d année(s) = %d minutes\n", annee, minutes);
            break;
        case 5:
            secondes = annee * 365 * 24 * 60 * 60;
            printf("%d année(s) = %d secondes\n", annee, secondes);
            break;
        default:
            printf("Choix invalide. Veuillez entrer un nombre entre 1 et 5.\n");
            break;
    }*/





    // ===========================================================================================











    /*int nombre;
    printf("Entrez un nombre: ");
    scanf("%d", &nombre);
    if (nombre > 0)
        printf("Le nombre est positif.\n");
    else if (nombre < 0)
        printf("Le nombre est negatif.\n");
    else
        printf("Le nombre est nul.\n");*/





    // ===========================================================================================






    /*char c;
    printf("Entrez un caractere: ");
    scanf(" %c", &c);

    if (c >= 65 && c <= 90)
        printf("Le caractère est une lettre majuscule.\n");
    else
        printf("Le caractère n'est pas une lettre majuscule.\n");*/





    // ===========================================================================================







    /*float moyenne;
    printf("Entrez la moyenne: ");
    scanf("%f", &moyenne);

    if (moyenne < 10) {
        printf("Mention : Recale .\n");
    } else if (moyenne < 12) {
        printf("Mention : Passable .\n");
    } else if (moyenne < 14) {
        printf("Mention : Assez bien .\n");
    } else if (moyenne < 16) {
        printf("Mention : Bien .\n");
    } else {
        printf("Mention : Tres bien .\n");
    }*/





    // ===========================================================================================





    /*char c;
    printf("Entrez un caractere: ");
    scanf(" %c", &c);

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        if (c >= 'A' && c <= 'Z')
            printf("Le caractere est une lettre MAJUSCULE.\n");
        else
            printf("Le caractere est une lettre minuscule.\n");

    }else
        printf("Ce n'est pas une lettre.\n");*/





    // ===========================================================================================





    /*int jour, mois, annee;
    printf("Entrez la date (jj/mm/aaaa): ");
    scanf("%d/%d/%d", &jour, &mois, &annee);
    switch(mois){
        case 1 :
            printf("%d-Janvier-%d\n", jour, annee);
            break ;
        case 2 :
            printf("%d-Fevrier-%d\n", jour, annee);
            break ;
        case 3 :
            printf("%d-Mars-%d\n", jour, annee);
            break ;
        case 4 :
            printf("%d-Avril-%d\n", jour, annee);
            break ;
        case 5 :
            printf("%d-May-%d\n", jour, annee);
            break ;
        case 6 :
            printf("%d-Juin-%d\n", jour, annee);
            break ;
        case 7 :
            printf("%d-Juillet-%d\n", jour, annee);
            break ;
        case 8 :
            printf("%d-Aout-%d\n", jour, annee);
            break ;
        case 9 :
            printf("%d-Sptembre-%d\n", jour, annee);
            break ;
        case 10 :
            printf("%d-Octobre-%d\n", jour, annee);
            break ;
        case 11 :
            printf("%d-Novembre-%d\n", jour, annee);
            break ;
        case 12 :
            printf("%d-Decembre-%d\n", jour, annee);
            break ;
        default :
            printf("Mois Incorrecte !");
            break ;
    }*/





    // ===========================================================================================






    /*int jour;
    srand(time(0));
    jour = rand() % 7;

    switch (jour) {
        case 0:
            printf("Dimanche\n");
            break;
        case 1:
            printf("Lundi\n");
            break;
        case 2:
            printf("Mardi\n");
            break;
        case 3:
            printf("Mercredi\n");
            break;
        case 4:
            printf("Jeudi\n");
            break;
        case 5:
            printf("Vendredi\n");
            break;
        case 6:
            printf("Samedi\n");
            break;
        default:
            printf("Erreur inconnue\n");
    }*/





    // ===========================================================================================






    /*int h1, m1, s1, h2, m2, s2;
    printf("Entrez le premier instant (HH:MM:SS): ");
    scanf("%d:%d:%d", &h1, &m1, &s1);

    printf("Entrez le deuxieme instant (HH:MM:SS): ");
    scanf("%d:%d:%d", &h2, &m2, &s2);

    if (h1 < h2 || (h1 == h2 && m1 < m2) || (h1 == h2 && m1 == m2 && s1 < s2))
        printf("Le premier instant vient avant le deuxieme.\n");
    else if (h1 > h2 || (h1 == h2 && m1 > m2) || (h1 == h2 && m1 == m2 && s1 > s2))
        printf("Le deuxieme instant vient avant le premier.\n");
    else
        printf("Il s'agit du mEme instant.\n");*/







    return 0;
}
