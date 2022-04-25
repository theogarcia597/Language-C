#include "classe.h"

     
void RemplirClasse(Classe_t *C)
{
 int i;//nombre d'eleve
 
 for(i=0;i<3;i++)
 {
  SaisirEleve(&C->TabEleve[i]);
 
 }
}

        /****************************************************************************************************************************/

    
void NommerClasse(Classe_t *C)
{
   
    printf("veulliez le nom de la maitresse:\n");
    scanf("%s",C->maitresse);
  
}

         /****************************************************************************************************************************/

/*void AfficherClasse(Classe_t C)
{
     int i;
    

        
        printf("La classe de %s a pour maitresse %s et contient %d eleves dont voici la liste: \n ",C.niveaux,C.maitresse,nbreleve);

            for(i=0;i<5;i++)
        	{ 
                 AfficherEleve(C.TabEleve[i]);  
            }  */


        /****************************************************************************************************************************/

