#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    /*Exercices sur les Variables-----------------------------------------*/


    /*### Challenge 1 : Affichage Informations -----------------------
    Écrivez un programme en C qui va permettre d'afficher vos
    informations personnelles : nom, prénom, âge, sexe, et
    adresse email. Les données sont saisies à partir du clavier.*/




    /*char nom[100] , prenom[100] , email[100] ;
    char sexe ;
    int age ;
    printf("Nom : ");
    gets(nom);
    printf("Prenom : ");
    gets(prenom);
    printf("Age : ");
    scanf("%d", &age);
    printf("Sexe : ");
    scanf("%*c");
    scanf("%c", &sexe);
    scanf("%*c");
    printf("Adresse Email : ");
    gets(email);
    puts(nom);
    puts(prenom);
    printf("%d ans !\n", age);
    printf("%c\n", sexe);
    puts(email);*/








    // ======================================================================================================



    /*### Challenge 2 : Conversion de la température
    Écrivez un programme qui demande la température en
    Celsius et la transforme en Kelvin.
    Formule :
    ```
    K = C + 273.15
    ```*/



    /*float temperature ;
    printf("Donner la Temperature en Celisius : ");
    scanf("%f", &temperature);
    printf("\n%.2f C  =   %.2f K .\n", temperature, temperature+273.15);*/



    // ======================================================================================================


    /*### Challenge 3 : Conversion de la distance
    Écrivez un programme qui demande la distance en kilomètres
    et la transforme en yards.
    Formule :
    ```
    Yards = Km * 1093.61
    ```*/



    /*float distance ;
    printf("Donner la Distance en Km : ");
    scanf("%f", &distance);
    printf("\n%.2f Km  =   %.2f yard .\n", distance, distance*1093.61);*/



    // ======================================================================================================


    /*### Challenge 4 : Conversion de la vitesse
    Écrivez un programme qui demande la vitesse en kilomètres
    par heure (km/h) et la transforme en mètres par seconde (m/s).
    Formule :
    ```
    m/s = km/h * 0.27778
    ```*/



    /*float vitesse ;
    printf("Donner la Vitesse en Km/h : ");
    scanf("%f", &vitesse);
    printf("\n%.2f Km/h  =   %.2f m/s .\n", vitesse, vitesse*0.27778);*/



    // ======================================================================================================



    /*Challenge 5 : Affichage Température
    Écrivez un programme qui demande la température en Celsius
    et affiche l'état de l'eau à cette température (solide, liquide, gaz).
    Règle :

    * C < 0 : Solide
    * 0 <= C < 100 : Liquide
    * C >= 100 : Gaz*/



    /*float C ;
    printf("Donner la Temperature en Celisius : ");
    scanf("%f", &C);
    if(C<0)
        printf("Etat = Solide !\n");
    else if(C>=0 && C<100)
        printf("Etat = Liquide !\n");
    else
        printf("Etat = Gaz !\n");*/



    // ======================================================================================================



    /*### Challenge 6 : Calcul et affichage des résultats
    Deux nombres réels, a et b, sont saisis au clavier.
    Calculez et affichez a + b, a - b, a * b, et a / b avec précision décimale.*/



    /*float a , b ;
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("%.2f + %.2f = %.0f\n", a , b , a+b);
    printf("%.2f - %.2f = %.0f\n", a , b , a-b);
    printf("%.2f * %.2f = %.0f\n", a , b , a*b);
    if(b==0)
        printf("La Division est Impossible !");
    else
        printf("%.2f / %.2f = %.0f\n", a , b , a/b);*/



    // ======================================================================================================



    /*### Challenge 7 : Moyenne pondérée de trois nombres
    Écrivez un programme en C pour calculer la moyenne pondérée de
    trois nombres donnés par l'utilisateur avec les pondérations suivantes :

    * 1er nombre : pondération 2
    * 2ème nombre : pondération 3
    * 3ème nombre : pondération 5*/



    /*float a , b , c , M ;
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    M = (a*2 + b*3 + c*5) / (2+3+5) ;
    printf("Moyenne pondere est : %.2f \n", M);*/



    // ======================================================================================================



    /*### Challenge 8 : Calcul de la moyenne géométrique
    Écrivez un programme en C pour trouver la moyenne géométrique de trois nombres saisis par l'utilisateur.
    Formule :
    ```
    Moyenne géométrique = (a * b * c)^(1/3)
    ```*/



    /*float a , b , c , M ;
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    M = pow((a*b*c) , 1.0/3.0) ;
    printf("Moyenne Geometrique est : %.2f \n", M);*/



    // ======================================================================================================



    /*### Challenge 9 : Calcul de la distance entre deux points dans un espace 3D
    Écrivez un programme C pour trouver la distance entre deux points donnés dans un espace 3D.
    Formule :
    ```
    Distance = √((x2-x1)² + (y2-y1)² + (z2-z1)²)
    ```*/



    /*float x1 , y1 , z1 ;
    float x2 , y2 , z2 ;
    float D ;
    printf("Entrer les coordonnées du point 1 :\n");
    printf("x1 = ");
    scanf("%f", &x1);
    printf("y1 = ");
    scanf("%f", &y1);
    printf("z1 = ");
    scanf("%f", &z1);
    printf("Entrer les coordonnées du point 2 :\n");
    printf("x2 = ");
    scanf("%f", &x2);
    printf("y2 = ");
    scanf("%f", &y2);
    printf("z2 = ");
    scanf("%f", &z2);
    D = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2) + pow(z2-z1, 2));
    printf("Distance entre les 2 points est : %.2f\n", D);*/



    // ======================================================================================================



    /*### Challenge 10 : Volume d'une sphère
    Écrivez un programme pour trouver le volume d'une sphère. Prenez le rayon de la sphère en entrée de l'utilisateur.
    Formule pour le volume d'une sphère :
    ```
    Volume = (4/3) * π * r³
    ```*/


    /*float r , V ;
    const float p = 3.14 ;
    printf("Entrer le rayon : ");
    scanf("%f", &r);
    V = (4/3) * p * pow(r,3) ;
    printf("Le volume du Sphere est : %.2f\n", V);*/



    // ======================================================================================================



    /*### Challenge 11 : Surface d'un rectangle
    Écrivez un programme pour trouver la surface
    d'un rectangle. Prenez la longueur et la largeur
    du rectangle en entrée de l'utilisateur.
    Formule pour la surface d'un rectangle :
    ```
    Surface = longueur * largeur
    ```*/



    /*float L , l , S ;
    printf("Entrer la longueur : ");
    scanf("%f", &L);
    printf("Entrer la largeur : ");
    scanf("%f", &l);
    S = L*l ;
    printf("Surface  =  %.2f\n", S);*/



    // ======================================================================================================



    /*### Challenge 12 : Nombre entier à quatre chiffres en ordre inverse
    Écrivez un programme C pour afficher un nombre entier à quatre chiffres
    dans l'ordre inverse sans utiliser de boucle. Par exemple, si le nombre
    entier est 1234, son inverse est 4321.*/







    // ======================================================================================================



    /*### Challenge 13 : Affichage des valeurs binaire et hexadécimale équivalentes
    Écrivez un programme C pour afficher la valeur équivalente en binaire et en hexadécimal.
    Entrez un nombre entier et affichez ses valeurs équivalentes en binaire et en hexadécimal.*/



    /*int nbr , k;
    printf("Entrer un nombre : ");
    scanf("%d", &nbr);
    printf("%d en hexadecimal = %X\n", nbr , nbr);
    int tmp = nbr ;
    int bin=0 , puissance = 0;
    while(tmp!=0){
        k = tmp%2 ;
        bin += k * pow(10, puissance) ;
        puissance++ ;
        tmp/=2 ;
    }
    printf("%d en binaire = %d\n", nbr , bin);*/





    return 0;

}
