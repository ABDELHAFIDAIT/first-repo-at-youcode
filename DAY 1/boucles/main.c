#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*int nombre, i;
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", nombre, i, nombre * i);
    }*/






    //==============================================================================





    /*int n, i;
    long factorielle = 1; // Utiliser un type plus grand pour éviter un dépassement.

    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Impossible de Calculer La factorielle.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorielle *= i;
        }
        printf("La factorielle de %d est %ld .\n", n, factorielle);
    }*/




    //==============================================================================




    /*int n, i, somme = 0;

    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        somme += i;
    }

    printf("La somme des %d premiers nombres naturels est %d.\n", n, somme);*/




    //==============================================================================





    /*int n, i, nombre_impair = 1;

    printf("Entrez un nombre entier : ");
    scanf("%d", &n);
    printf("Les %d premiers nombres impaires sont : ", n);
    for (i = 0; i < n; i++) {
        printf("%d \t", nombre_impair);
        nombre_impair += 2;
    }*/





    //==============================================================================




    /*int n, puissance , resultat = 1, i;

    printf("Entrez un nombre : ");
    scanf("%d", &n);
    printf("Entrez la puissance : ");
    scanf("%d", &puissance);

    for (i = 1; i <= puissance; i++) {
        resultat *= n;
    }

    printf("%d^%d = %d\n", n, puissance, resultat);
    //resultat = pow(n,puissance);
    //printf("%d", resultat);*/




    //==============================================================================






    /*int n, i, nombre_pair = 2;

    printf("Entrez un nombre entier : ");
    scanf("%d", &n);
    printf("Les %d premiers nombres paires sont : ", n);
    for (i = 0; i < n; i++) {
        printf("%d \t", nombre_pair);
        nombre_pair += 2;
    }*/






    //==============================================================================





    /*int n, chiffre;

    printf("Entrez un entier : ");
    scanf("%d", &n);

    printf("L'inversion de %d est : ", n);
    while (n != 0) {
        chiffre = n % 10;
        printf("%d", chiffre);
        n /= 10;
    }*/




    //==============================================================================





    /*int n, i;
    int element1 = 0, element2 = 1, temp;

    printf("Entrez le nombre de termes de la suite de Fibonacci : ");
    scanf("%d", &n);

    printf("Les %d premiers termes de la suite de Fibonacci : \n", n);

    for (i = 1; i <= n; i++) {
        printf("F(%d) = %d \n", i-1 , element1);
        temp = element1 + element2;
        element1 = element2;
        element2 = temp;
    }*/




    //==============================================================================





    /*int compteur = 0;
    long n ;

    printf("Entrez un entier positif : ");
    scanf("%ld", &n);

    if (n == 0) {
        compteur = 1;
    } else {
        while (n != 0) {
            n /= 10;
            compteur++;
        }
    }

    printf("Nombre de chiffres est : %d\n", compteur);*/





    //==============================================================================





    /*int n, i, somme = 0;

    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        somme += i;
    }

    printf("La somme des %d premiers entiers est : %d.\n", n, somme);*/






    return 0;
}
