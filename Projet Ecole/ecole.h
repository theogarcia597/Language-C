#include <stdio.h>
#include <string.h>
#include "classe.h"

#ifndef ECOLE_H
#define ECOLE_H
#define CLASSEECOLE
typedef struct ecole
{
char nomEcole[20];
int nb_classe;
classe_t ClasseEcole[CLASSEECOLE];
}ecole_t;
//se référer à exo école 
void SaisirEcole(ecole_t *E);
// scanf("%s",E->nomEcole);
void AfficherEcole(ecole_t E);
//printf("%s",E.nomEcole);

/*
    int i ;
    int j;
        for(i=0;<nbclasse;i++)
            AfficherClasse(E.ClasseEcole[i])
        for(j=0;j<nbeleve;i++)
        AfficherEleve(E.ClasseEcole[i].tabEleve[j] );
    
*/


int RechercherEleve(ecole_t E, eleve_t lui);

/*
scanf(%s,lui.nom)
scanf(%s,lui.prenom)
int i;
for(i=0;i<nb_eleve;i++)
??? if ((strcmp (E.tabEleve[i].nom,lui.nom)) && (strcmp (E.tabEleve[i].prenom,lui.prenom)))==0
return i;
else return-1 qui renverra àsaisir élève 
Pensez à la fonction bool
*/

void sauvegarde(const ecole_t *E);
/*FILE* 
fopen 
voir exo sully
boucles avec fprintf (2boucle une dans la classe, une dans tab eleve)


NE PAS OUBLIER fclose !!!!!

#endif




