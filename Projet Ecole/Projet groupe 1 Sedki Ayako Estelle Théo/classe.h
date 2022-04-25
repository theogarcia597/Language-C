#include <stdio.h>
#include <string.h>
#include "eleve.h"


#ifndef CLASSE_H
#define CLASSE_H

/* tableau global representant la classe */
typedef struct classe
{   char niveaux[20];
	char maitresse[26];
	eleve_t TabEleve[25];
}Classe_t;


void NommerClasse(Classe_t *C);
void RemplirClasse(Classe_t *C);
void AfficherClasse(Classe_t C);


#endif