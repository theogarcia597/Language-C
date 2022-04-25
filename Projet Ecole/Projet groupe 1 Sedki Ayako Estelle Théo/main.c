#include <stdio.h>
#include <string.h> // mais deja appele dans les autres fichiers .h

#include "ecole.h"

int main()
{
ecole_t monecole;
RemplirEcole(&monecole);
AfficherEcole(monecole);
RechercherEleve(monecole);
sauvegardeFichier(&monecole);
}