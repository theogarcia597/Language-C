#include <stdio.h>
#include <string.h>
#include "ingredient.h"

#define MAXING 10
#define MAXPIZZA 10

#ifndef PIZZA_H
#define PIZZA_H

typedef struct Pizza
{
    char   nom[30]; //aucun soucis pour que cela s'appelle nom car pas d'ambiguité
    double prixvente;
    double prixrevient;
    //ingredient_t TabIng[];//MAL !!! oubligé de mettre une taille
    // astuce à retenir pour gérer des tableaux qui ne sont pas complétement remplis
    int nbing;// indique le nombr de cases singificatives dans mon tableau
    ingredient_t TabIng[MAXING];// pour changer à la volée la taille du tableau on utilise un #define
} Pizza_t;

void AfficherPizza(Pizza_t P);

void SaisirPizza(Pizza_t *P);

double Calcul(ingredient_t tab[], int taille);


void SaisirTabPizza(Pizza_t *TAB, int taille);

void AfficherTabPizza(const Pizza_t *TAB, int taille);
#endif