#include <stdio.h>
#include <string.h>
#include "eleve.h"

#ifndef CLASSE_H
#define CLASSE_H
#define MAXNIVEAUX 5

typedef struct classe 
{
 char niveaux[5];
 int numclasse; //%25 (for(i=0;i<nbdeclasse;i++))
 int nb_eleve;
eleve_t tabEleve[25];

}classe_t;


void CalculClasse(classe_t);
//Commencez par calculer le nombre d'élève par niveaux (du même âge)

//if (date_t.age=6)
//nbeleveCP ++



/*nbeleveCP/25
nbeleveCE1/25     // pas oublier fonction pour arrondir au supèrieur 
nbeleveCE2/25
nbelveCM1/25
nbeleveCM2/25
*/

void AffecterEleve(classe_t *C, eleve_t E);
// boucle pour rentrer dans TabEleve
// si age=7 alors niveaux == CE1


void AfficherClasse(classe_t C );
//boucle pour afficherniveau avec une boucle dedans pour afficher les eleves (voir mm fonction afficher eleves)





#endif




