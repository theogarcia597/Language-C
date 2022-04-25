#include "classe.h"


     
void RemplirClasse()
{
 int i;
 double age ;
 
	SaisirEleve(&CP.MaClasse[i]);
    age =CalculAge(age_t A);

if ( age==6)
{
  for(i=0;i<CP.nbre;i++)
    {
  	   
    }
}
if (CE1.MaClasse->ageEleve.age==7)
{
  for(i=0;i<CE1.nbre;i++)
    {
  	SaisirEleve(&CE1.MaClasse[i]);   	
    }
}
if ( CE2.MaClasse->ageEleve.age==8)
{
   for(i=0;i<CE2.nbre;i++)
    {
  	SaisirEleve(&CE2.MaClasse[i]);   	
    } 
}
if ( CM1.MaClasse->ageEleve.age==9)
{
  for(i=0;i<CM1.nbre;i++)
    {
  	SaisirEleve(&CM1.MaClasse[i]);   	
    }  
}
if ( CM2.MaClasse->ageEleve.age==10)
{
  for(i=0;i<CM2.nbre;i++)
    {
  	SaisirEleve(&CM2.MaClasse[i]);   	
    } 
}

else 
printf ("test");
}
        /****************************************************************************************************************************/

int main()
{
Classe maclasse;

RemplirClasse();

//printf("%s %s %s",maclasse.MaClasse->prenom,maclasse.MaClasse->nom,maclasse.niveaux);
}
