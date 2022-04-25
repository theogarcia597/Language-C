#include <stdio.h>
#include <string.h>
#include "eleve.h"


#ifndef CLASSE_H
#define CLASSE_H
#define NN 3

eleve_t TabEleve[25];

typedef struct
{   char nom[4];
	char maitresse[26];
	int nbre; /*nbre d'�l�ves dans le tableau MaClasse */
	eleve_t MaClasse[32];
}CPclasse;

CPclasse CP={"CP","nina",25}; //definition d'une classe globale 

typedef struct
{   char nom[4];
	char maitresse[26];
	int nbre;
	eleve_t MaClasseCE1[32];
}CE1classe;

CE1classe CE1={"CE1","nina",25}; 

typedef struct
{   char nom[4];
	char maitresse[26];
	int nbre;
	eleve_t MaClasse[32];
}CE2classe;

CE2classe CE2={"CE2","nina",25}; 

typedef struct
{   char nom[4];
	char maitresse[26];
	int nbre;
	eleve_t MaClasse[32];
}CM1classe;

CM1classe CM1={"CM1","nina",25}; 

typedef struct
{   char nom[4];
	char maitresse[26];
	int nbre;
	eleve_t MaClasse[32];
}CM2classe;

CM2classe CM2={"CM2","nina",25}; 


/*Classe_t CP={"CP","maitraissecp",NN};     //definition d'une classe 
Classe_t CE1={"CE1","maitraisseCE1",25};
Classe_t CE2={"CE2","maitraisseCE2",25};
Classe_t CM1={"CM1","maitraisseCM1",25};
Classe_t CM2={"CM2","maitraisseM2",25};*/


void NommerClasse(Classe_t *C);
void RemplirClasse(Classe_t *C);
void AfficherClasse(Classe_t C);


#endif