#include <stdio.h>
#include <string.h>
#include "date.h"

#ifndef INGREDIENT_H
#define INGREDIENT_H
typedef struct ingredient
{
    char   nom[30];
    double poids; // poids exprimé en grammes
    double prixkg; //prix en euros
    Date_t DLC; //DLC =Date limite de consommation
} ingredient_t;

void SaisirIngredient(ingredient_t *I);

void AfficherIngredient(ingredient_t I);

void AfficherTabIngredient(const ingredient_t *Tab, int taille);

void SaisirTabIngredient(ingredient_t Tab[], int taille);

#endif