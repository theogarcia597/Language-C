#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "classe.h"

#ifndef ECOLE_H
#define ECOLE_H


//une ecole est representee par un nom un nombre de classes et les classes (donc un tableau de classes)
typedef struct ecole
{
char nomEcole[20];
Classe_t ClasseEcole[5];//Classeecole = nombre maximum de classes
}ecole_t;



void SaisirEcole(ecole_t *E);// fonction pour saisir le nom de l ecole 
void RemplirEcole(ecole_t *E);
void AfficherEcole(ecole_t E);// Fonction pour afficher l ecole qui contient les classes qui contiennent les eleves
void RechercherEleve(ecole_t E);//fonction pour rechercher un eleve dans l ecole en connaissant son prenom et son nom
//si cette fonction renvoie -1 il faudra renvoyer a la fonction saisir eleve
//eleve_t lui correspond a l eleve a rechercher
void sauvegardeFichier(const ecole_t *E);//fonction pour sauvegarder l ecole dans un fichier

#endif







/*FILE* 
fopen 
voir exo sully
boucles avec fprintf (2boucle une dans la classe, une dans tab eleve)


NE PAS OUBLIER fclose !!!!!
*/





