#include <stdio.h>
#include <string.h>
#include  "date.h"
#ifndef ELEVE_H     //création de la bibliotèque eleve.h
#define ELEVE_H

//Création de la structure élève
typedef struct eleve
{
    char prenom[20];
    char nom[20];
    int conf; // cette variable vas nous permettre de crée une boucle confirmation de saisie dans notre eleve.c


    date_t ageEleve; // nous récupérons ici la date
}eleve_t;
 
//fonction saisie de l'élève
void SaisirEleve(eleve_t *E);

//fonction pour afficher la saisie
void AfficherEleve(eleve_t E);


#endif //fin de la bibliotèque eleve.h




