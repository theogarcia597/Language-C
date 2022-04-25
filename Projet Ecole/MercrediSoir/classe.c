#include "classe.h"
#include "ecole.h"
     
void RemplirClasse()
{ int i;
 int stop_saisie=1;
  do
  {
  SaisirEleve(eleve_t TabEleve[25]);
  }
  while(stop_saisie=1)
       // if TabEleve[25].age==6

        strcpy(TabEleve[25].age==6,&CP.MaClasse[i])
     
 

}


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


