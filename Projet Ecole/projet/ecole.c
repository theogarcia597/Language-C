#include "ecole.h"

void SaisirEcole(ecole_t *E)
{
	// choix de puts afin de pouvoir lire une ligne et permettre a l utilisateur de saisir des espaces dans le nom de l ecole
    printf("Veuillez saisir le nom de votre ecole\n");
	//saisie de la ligne du nom de l ecole dans la chaine de caractères nomEcole
    scanf("%s",E->nomEcole); 
    //gets(E->nomEcole);
}

        /****************************************************************************************************************************/


void RemplirEcole(ecole_t *E)
{
int i;//i c'est nombre des classes 
int j;

SaisirEcole(E);

    for(i=0;i<2;i++)
        {
            NommerClasse(&E->ClasseEcole[i]);                                        
            RemplirClasse(&E->ClasseEcole[i]);               
        }
}

        /****************************************************************************************************************************/



void AfficherEcole(ecole_t E)
{
    int i; //pour parcourir le tableau classes
	printf ("Voici la composition de l ecole:");
    puts (E.nomEcole);
    for (i=0;i<2;i++)
    {      
        AfficherClasse(E.ClasseEcole[i]);                 
    }
}

        /****************************************************************************************************************************/

void RechercherEleve(ecole_t E, const char *son_nom,const char *son_prenom )
{
    int i; // sert a parcourir le tableau de classes
    int j; //sert a parcourir le tableau d eleves
//demande a l utilisateur de saisir le prenom et le nom de l eleve a rechercher
printf("Veuillez saisir le prenom et le nom de l eleve a rechercher (separes par un espace, ex: Martin Durand)");
scanf ("%s %s",son_nom,son_prenom);
//boucle pour parcourir le tableau de classes
for (i=0;i<2;i++)
    {
        // boucle pour parcourir le tableau d eleves
        for (j=0;j<3;j++)
        {
		//verification que le nom et le prenom sont identique
		if ((strcmp (E.ClasseEcole[j].TabEleve[i].nom,son_nom)) && (strcmp (E.ClasseEcole[j].TabEleve[i].prenom,son_prenom))==0)
		//return i;
		printf("il est dans la classe %s",E.ClasseEcole[j].niveaux);
		else //return-1 //qui renverra àsaisir élève
		printf ("la personne que vous cherchez n est pas dans cette ecole ;)");
        }
    }
}

/*
void sauvegardeFichier(const ecole_t *E)
{
//declaration des variables
// save sera le descripteur
FILE*save;
int i; // pour boucler dans le tableau des classes
int j; // pour boucler dans le tableau des eleves
//ouverture du ficher de sauvegarde en ecriture
save = fopen("sauvegardeecole.csv","w");
// Verification du fichier
if (save==NULL)
    {perror("Impossible d'ouvrir le fichier");
    exit(EXIT_FAILURE);
    }
//Ecriture du tableau classe dans le fichier
//boucle dans le tableau de classes
for (i=0;i<nbclasse;i++)
	{
		fprintf(save,"%s"E.ClasseEcole[i].niveaux,);
		//boucle dans le tableau d eleves
		for (j=0; j<nbeleve;j++)
		{
			fprintf (save,"%s ; %s",E.ClasseEcole[i].tabEleve[j].prenom,E.ClasseEcole[i].tabEleve[j].nom);
		}
	}
//fermeture du fichier
fclose(save);
}*/
int main()
{
    char nom[25]="estelle";
    char prenom[25]="ayako";
ecole_t monecole;
//NommerClasse(&monecole);
RemplirEcole(&monecole);
AfficherEcole(monecole);
RechercherEleve(monecole,nom,prenom);
//printf("%s",monecole.ClasseEcole[0].maitresse);
}