#include <stdio.h>
#include <string.h>
#include <time.h>

#ifndef DATE_H
#define DATE_H




typedef struct date 
{
 int jour;
    int mois;
    int ans;
int age;

}date_t;

int CalculAge(date_t A);
//utiliser time_t pour obtenir l'année en cours.
//Se référer à l'exo YAOURT
//Calculer l'age pour savoir dans quel classe on vas la mettre





#endif




