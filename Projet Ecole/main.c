#include <stdio.h>
#include <string.h>
#include "ecole.h"



int main()
{
    ecole_t ecole1[25]={};
    eleve_t eleve1[25] = {"Theo", "Garcia",31,10,2000};
    classe_t classe1[25]={};

    
SaisirEcole(ecole1[25]);
AfficherEcole(ecole1[25]);
RemplirCLasse(classe1);
RechercherEleve(eleve1[25]);
sauvegarde();

}