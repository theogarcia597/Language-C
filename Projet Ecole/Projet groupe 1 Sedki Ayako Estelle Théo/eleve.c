#include "eleve.h"


//fonction SaisirEleve permet de renseigner le nom le prenom et la date de naissance de l eleve
//doit contenir une confirmation de la saisie de l utilisateur (relecture de la saisie et validation)
void SaisirEleve(eleve_t *E)
{
//boucle pour faire la saisie tant que l utilisateur ne l a pas validee en tapant 1
do
{
//mise a 0 des champs de la struc tm naissance
memset (&E->naissance,0,sizeof(E->naissance));
//demande de saisir le prenom le nom et la date de naissance de l eleve en precisant le format attendu
printf("Veuillez saisir les donnees de votre élève au format prénom nom JJ MM AAAA.\n");
scanf("%s %s %d %d %d",E->prenom, E->nom, &E->naissance.tm_mday, &E->naissance.tm_mon, &E->naissance.tm_year);

//printf de verification de la saisie afin que l utilisateur confirme sa saisie
printf("l'élève s'apelle bien %s %s et est née le : %d / %d / %d ?\n",E->prenom, E->nom, E->naissance.tm_mday, E->naissance.tm_mon, E->naissance.tm_year);
//demande a l utilisateur de confirmer sa saisie pour quitter la boucle
printf("\n Pour confimer taper '1'\n");
scanf("%d",&E->conf);

}
while (E->conf!=1);
}


//Fonction AfficherEleve permet d'afficher le contenu de la struct eleve (prenom nom et date de naissance JJ MM AAAA)
void AfficherEleve(eleve_t E)
{
printf("\nPrénom: %s Nom: %s Jour: %d Mois: %d Année: %d\n",E.prenom, E.nom,E.naissance.tm_mday, E.naissance.tm_mon, E.naissance.tm_year);
}


//Fonction CalculAge permet de calculer l age de l eleve en fonction de son annne de naissance saisie et l annee en cours
double CalculAge(eleve_t E)
{
	time_t today;
	time_t Naissance;
	double diff;
	double age;

	today = time (NULL);
	//transformer les donnees attendues  pour le struct tm
	E.naissance.tm_mon= E.naissance.tm_mon-1;
	E.naissance.tm_year = E.naissance.tm_year -1900;
	//Conversion du E.naissance en time_t (car struct_tm)
	Naissance = mktime(&E.naissance);

	//calcul du temps en secondes entre les 2 dates
	diff = difftime (today,Naissance);

	//conversion du temps en secondes en annee affin d obtenir age
	age = (diff/60/60/24/365);
	printf ("son age est %0.lf ans\n",age);
}
