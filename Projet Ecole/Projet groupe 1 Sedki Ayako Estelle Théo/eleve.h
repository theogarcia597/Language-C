#include <stdio.h>
#include <string.h>
#include <time.h>

#ifndef ELEVE_H
#define ELEVE_H

typedef struct eleve
{
    char prenom[20];
    char nom[20];
    struct tm naissance; // utilisation de la struc tm pour la date de naissance afin de calculer l age de l eleve
   int conf;
}eleve_t;
 
//fonction SaisirEleve permet de renseigner le nom le prenom et la date de naissance de l eleve
//doit contenir une confirmation de la saisie de l utilisateur (relecture de la saisie et validation)
void SaisirEleve(eleve_t *E);

//Fonction AfficherEleve permet d'afficher le contenu de la struct eleve
void AfficherEleve(eleve_t E);


//Fonction CalculAge permet de calculer l age de l eleve en fonction de son annne de naissance saisie et l annee en cours
// double CalculAge(eleve_t E); // fonction d amelioration pour calculer l age qui termine le niveau



#endif



