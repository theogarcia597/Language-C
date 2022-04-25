#include <stdio.h>
#include <string.h>
#include "eleve.h"


#ifndef CLASSE_H
#define CLASSE_H
#define NN 3
/* tableau global repr�sentant la classe */
typedef struct classe
{   char niveaux[20];
	char maitresse[26];
	int nbre; /*nbre d'�l�ves dans le tableau MaClasse */
	eleve_t TabEleve[25];
}Classe_t;

/*Classe_t CP={"CP","maitraissecp",NN};     //definition d'une classe 
Classe_t CE1={"CE1","maitraisseCE1",25};
Classe_t CE2={"CE2","maitraisseCE2",25};
Classe_t CM1={"CM1","maitraisseCM1",25};
Classe_t CM2={"CM2","maitraisseM2",25};*/


void NommerClasse(Classe_t *C);
void RemplirClasse(Classe_t *C);
void AfficherClasse(Classe_t C);


#endif