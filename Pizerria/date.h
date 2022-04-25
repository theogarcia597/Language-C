#include <stdio.h>
#include <string.h>

#ifndef DATE_H
#define DATE_H

typedef struct Date
{   int jour;
    int mois;
    int an;
}Date_t; 

void AfficherDate(Date_t D);

void SaisirDate(Date_t *D);


void AfficherTabDate(int taille, Date_t TAB[]);


#endif