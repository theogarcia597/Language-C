#include <stdio.h>
#include <string.h>
#include <time.h>

#ifndef AGE_H
#define AGE_H




typedef struct age 
{
 int jour;
    int mois;
    int an;


}age_t;

int CalculAge(age_t A);
//utiliser time_t pour obtenir l'année en cours.
//Se référer à l'exo YAOURT
//Calculer l'age pour savoir dans quel classe on vas la mettre








#endif




