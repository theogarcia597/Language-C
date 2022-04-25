#include "classe.h"

     
void RemplirClasse(Classe_t *C)
{
 int i;//nombre d'eleve
 double age ;
 double resultat;
 
 for(i=0;i<3;i++)
 {
  SaisirEleve(&C->TabEleve[i]);
 
  //resultat = CalculAge(C->TabEleve[i]);
 }
}

        /****************************************************************************************************************************/

    
void NommerClasse(Classe_t *C)
{
   
    printf("veulliez saisir le niveaux et le nom de la maitresse:\n");
    scanf("%s %s",C->niveaux,C->maitresse);
  //  printf(" La classe de %s a pour maitresse %s\n",C.niveaux,C.maitresse);  
}

         /****************************************************************************************************************************/

void AfficherClasse(Classe_t C)
{
     int i;
    int nbreleve;

         nbreleve = sizeof (C.TabEleve)/sizeof (char) ;
        printf("La classe de %s a pour maitresse %s et contient %d eleves dont voici la liste: \n ",C.niveaux,C.maitresse,nbreleve);

            for(i=0;i<3;i++)
        	{ 
                 AfficherEleve(C.TabEleve[i]);  
            }  
}

        /****************************************************************************************************************************/
/*int main()
{
Classe_t maclasse;
eleve_t moneleve;

NommerClasse(&maclasse);
RemplirClasse(&maclasse);
AfficherClasse(maclasse); 

//printf("%s %s %s",maclasse.MaClasse->prenom,maclasse.MaClasse->nom,maclasse.niveaux);
}*/


