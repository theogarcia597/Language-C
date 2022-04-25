#include "eleve.h" //bibliotèque des élève
#include "date.h" //bibliotèque de la date



//fonction saisir avec confirmation
void SaisirEleve(eleve_t *E)
 //ici on rentre dans la structure "eleve" et on utilise un pointeur car ont vas modifié ses variable.
{
do
{
    //saisie de lélève 
printf("Veuillez saisir votre élève au format prénom nom et JJ MM AAAA.\n");

//*pointeur = ->
scanf("%s %s %d %d %d",E->prenom, E->nom, &E->ageEleve.jour, &E->ageEleve.mois, &E->ageEleve.ans);



// On demande ici si la saisie de lélève est bonne.
printf("l'élève s'apelle bien %s %s et est née le : %d / %d / %d ?",E->prenom, E->nom, E->ageEleve.jour, E->ageEleve.mois, E->ageEleve.ans);
printf("\n Pour confimer taper 1\n");
scanf("%d",&E->conf); //Confirmation de la saisie 

}
/* La boucle do while nous permet ici de crée une confirmation de saisie 
ce qui veut dire que tant que la variable conf n'est pas égale à 1 il faudra recomencer la série 
*/
while (E->conf!=1); 


}

// ici on affiche l'élève saisie
void AfficherEleve(eleve_t E)
{
    //On utilise la strcuture "eleve"
    //pas de pointeur alors on mets un '.'
printf("\nPrénom: %s Nom: %s Jour: %d Mois: %d Année: %d ",E.prenom, E.nom, E.ageEleve.jour, E.ageEleve.mois, E.ageEleve.ans);
}


int main()
{
eleve_t ldnr = {"Theo", "Garcia",31,10,2000};

SaisirEleve(&ldnr);

AfficherEleve(ldnr);

}