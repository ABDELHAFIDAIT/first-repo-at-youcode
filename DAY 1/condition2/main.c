#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*float revenu;
    int score_credit, duree;

    printf("Entrer votre revenu annuel: ");
    scanf("%f", &revenu);
    printf("Entrer votre score de crédit (sur 1000) : ");
    scanf("%d", &score_credit);
    printf("Entrer la durée du prêt (en années) : ");
    scanf("%d", &duree);

    if (revenu >= 30000 && score_credit >= 700 && duree <= 10)
        printf("Éligible\n");
    else if (revenu >= 30000 && score_credit >= 650 && duree <= 15)
        printf("Éligible avec conditions\n");
    else
        printf("Non éligible\n");*/






    //===========================================================================================





    /*float pBase , pAss ;
    int age , voiture , accident ;
    printf("Prime de base = ");
    scanf("%f" , &pBase);
    printf("age = ");
    scanf("%d" , &age);
    printf("Nombre d'Accidents = ");
    scanf("%d" , &accident);
    printf("Choisissez le type de votre Voiture :  1 - Sportif.\t2 - Utilitaire.\t3 - Familiale.\n");
    scanf("%d", &voiture);
    pAss = 0 ;
    if(age<25){
        pAss+=(pBase*1.5);
    }else if(age>=25 && age<=65){
        pAss+=pBase;
    }else{
        pAss+=(pBase*1.2);
    }
    if(accident>1)
        pAss+=(pBase*1.3);//Prime + Prime*30%
    switch(voiture){
        case 1 :
            pAss+=(pBase*2);
            break ;
        case 2 :
            pAss+=(pBase*1.2);
            break ;
        case 3 :
            pAss+=(pBase*1.1);
            break ;
        default :
            break ;
    }
    printf("\nPrime Assurance = %.2f .\n", pAss);*/





    //===========================================================================================





    /*int jours_accordes, jours_utilises, statut;
    int jours_restants;

    printf("Entrez le nombre de jours de congé accordés: ");
    scanf("%d", &jours_accordes);
    printf("Entrez le nombre de jours de congé utilisés: ");
    scanf("%d", &jours_utilises);
    printf("Entrez le statut de l'employé (0: Temps partiel, 1: Temps plein): ");
    scanf("%d", &statut);

    if (statut == 1)
        jours_restants = jours_accordes - jours_utilises;
    else
        jours_restants = (jours_accordes / 2) - jours_utilises;


    if (jours_restants < 0)
        printf("Alerte : Jours utilisés dépassent les jours accordés.\n");
    else
        printf("Jours de congé restants: %d\n", jours_restants);*/






    //===========================================================================================






    /*int score, anciennete, recompenses;
    float bonus = 0;

    printf("Entrez le score de performance (sur 100): ");
    scanf("%d", &score);
    printf("Entrez l'ancienneté en années: ");
    scanf("%d", &anciennete);
    printf("Entrez le nombre de récompenses (0, 1, 2 ou plus): ");
    scanf("%d", &recompenses);

    if (score >= 90 && anciennete >= 5)
        printf("Évaluation : Excellente\n");
    else if (score >= 75 && anciennete >= 3)
        printf("Évaluation : Bonne\n");
    else if (score >= 50 && anciennete < 3)
        printf("Évaluation : Satisfaisante\n");
    else
        printf("Évaluation : Insuffisante\n");



    if (recompenses == 1)
        bonus = 10;
    else if (recompenses >= 2)
        bonus = 20;

    printf("Bonus : %.2f %%\n", bonus);*/





    //===========================================================================================





    /*float budget;
    int personnes;

    printf("Entrez votre budget (en euros): ");
    scanf("%f", &budget);
    printf("Entrez le nombre de personnes: ");
    scanf("%d", &personnes);

    if (budget >= 1000)
        printf("Voyage haut de gamme\n");
    else if (budget >= 500)
        printf("Voyage moyen\n");
    else
        printf("Voyage économique\n");



    if (budget >= 1000 && personnes > 2)
        printf("Destination recommandée : Plage\n");
    else if (budget >= 500 && personnes <= 2)
        printf("Destination recommandée : Montagne\n");
    else
        printf("Destination recommandée : Ville\n");*/






    //===========================================================================================






    /*float consommation, prix;
    int type_utilisateur, type_contrat;

    printf("Entrez la consommation d'électricité (en kWh): ");
    scanf("%f", &consommation);
    printf("Entrez le type d'utilisateur (1: Résidentiel, 2: Commercial): ");
    scanf("%d", &type_utilisateur);
    printf("Entrez le type de contrat (0: Standard, 1: Réduit): ");
    scanf("%d", &type_contrat);

    if (type_utilisateur == 1) {
        if(type_contrat == 0)
            prix = 0.20 ;
        else
            prix = 0.15 ;
    }else{
        if(type_contrat == 0)
            prix = 0.30 ;
        else
            prix = 0.25 ;
    }

    prix *= consommation;

    if (consommation > 500)
        prix *= 1.10;

    printf("Facture d'électricité: %.2f euros\n", prix);*/





    //===========================================================================================





    /*float revenu, deductions, impots;
    int statut_fiscal;

    printf("Entrez votre revenu annuel (en euros): ");
    scanf("%f", &revenu);
    printf("Entrez votre statut fiscal (1: Célibataire, 2: Marié, 3: Chef de famille): ");
    scanf("%d", &statut_fiscal);

    if (statut_fiscal == 1)
        deductions = 1000;
    else if (statut_fiscal == 2)
        deductions = 2000;
    else
        deductions = 3000;

    revenu -= deductions;


    if (revenu <= 20000)
        impots = revenu * 0.05;
    else if (revenu <= 50000)
        impots = revenu * 0.10;
    else
        impots = revenu * 0.20;

    printf("Le montant des impôts à payer est: %.2f euros\n", impots);*/





    //===========================================================================================






    /*int age, historique;

    printf("Entrez votre age: ");
    scanf("%d", &age);
    printf("Historique medical (0: Aucun, 1: Probleme mineur, 2: Probleme majeur): ");
    scanf("%d", &historique);

    if (age < 30) {
        printf("Plan de sante: De base\n");
    } else if (age >= 30 && historique == 0) {
        printf("Plan de sante: De base\n");
    } else {
        printf("Plan de sante: Etendu\n");
    }

    if (historique == 2) {
        printf("Couverture supplementaire ajoutee pour probleme majeur.\n");
    }*/






    //===========================================================================================






    /*float salaire_base, salaire_total, taux_horaire;
    int heures_supplementaires, heures_fixe , type_poste;

    printf("Entrez le salaire de base (en euros): ");
    scanf("%f", &salaire_base);
    printf("Entrez le nombre d'heures fixe: ");
    scanf("%d", &heures_fixe);
    printf("Entrez le nombre d'heures supplémentaires: ");
    scanf("%d", &heures_supplementaires);
    printf("Entrez le type de poste (1: Junior, 2: Senior): ");
    scanf("%d", &type_poste);

    taux_horaire = salaire_base / heures_fixe;
    salaire_total = salaire_base + heures_supplementaires * taux_horaire * 1.5;

    if (type_poste == 1) {
        salaire_total += salaire_base * 0.10;
    } else {
        salaire_total += salaire_base * 0.20;
    }

    printf("Le salaire total est: %.2f euros\n", salaire_total);*/






    //===========================================================================================





    /*int age, annees_cotisation;
    float montant_epargne;

    printf("Entrez votre âge: ");
    scanf("%d", &age);
    printf("Entrez le nombre d'années de cotisation: ");
    scanf("%d", &annees_cotisation);
    printf("Entrez le montant total épargné (en euros): ");
    scanf("%f", &montant_epargne);

    if (age >= 65 && annees_cotisation >= 30 && montant_epargne >= 100000) {
        printf("Plan de retraite: Complet avec pension élevée\n");
    } else if (age >= 65 && annees_cotisation >= 20 && montant_epargne >= 50000) {
        printf("Plan de retraite: Partiel avec pension moyenne\n");
    } else {
        printf("Plan épargne non encore disponible\n");
    }*/








    return 0;
}
