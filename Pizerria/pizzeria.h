#include <stdio.h>
#include <string.h>
#include "pizza.h"


#ifndef PIZZERIA_H
#define PIZZERIA_H

typedef struct Pizzeria
{   char nompizzeria[30];
    int nbpizza; // nombre de cases interessantes dans le tableau TabPizza
    Pizza_t TabPizza[MAXPIZZA];// carte des pizzas
}Pizzeria_t;

void SaisirPizzeria(Pizzeria_t *P);

void AfficherPizzeria(const Pizzeria_t *P);

#endif

