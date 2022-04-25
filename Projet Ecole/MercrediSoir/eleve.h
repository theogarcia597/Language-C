#include <stdio.h>
#include <string.h>
#include <time.h>
//#include  "age.h"
#ifndef ELEVE_H
#define ELEVE_H

typedef struct eleve
{
    char prenom[20];
    char nom[20];
    int conf;//????????? je pense pas util à déclarer en variable locale dans le void saisireleve
	//   age_t ageEleve; // supprime et remplace par un struc tm donc suppression du date.h créé initialement
	struct tm naissance; // utilisation de la struc tm pour la date de naissance afin de calculer l age de l eleve

}eleve_t;
 
//fonction SaisirEleve permet de renseigner le nom le prenom et la date de naissance de l eleve
//doit contenir une confirmation de la saisie de l utilisateur (relecture de la saisie et validation)
void SaisirEleve(eleve_t *E);
//Se référer à l'exo YAOURT
//scanf pour saisir le prénom le nom  (dans struct eleve) le jour le mois et l'année (dans struct age)
//E->prenom, E->nom, &E->ageEleve.jour...
//Penser à donner la structure pour la personne qui vas saisir la date
//pensez à ajouter une confirmation de saisir.


//Fonction AfficherEleve permet d'afficher le contenu de la struct eleve
void AfficherEleve(eleve_t E);
//printf ("Prénom: %s Nom: %s Jour: %d Mois: %d Année: %d ",E.prenom, E.nom, E.ageEleve.jour, E.ageEleve.mois, E.ageEleve.annee)


//Fonction CalculAge permet de calculer l age de l eleve en fonction de son annne de naissance saisie et l annee en cours
double CalculAge(eleve_t E);



#endif



