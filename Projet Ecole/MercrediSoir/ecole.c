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

void RechercherEleve(ecole_t E)
{
    int i; // sert a parcourir le tableau de classes
    int j; //sert a parcourir le tableau d eleves
    char son_nom[50];
    char son_prenom[50];
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
		if (((strcmp (E.ClasseEcole[j].TabEleve[i].nom,son_nom))==0) && ((strcmp (E.ClasseEcole[j].TabEleve[i].prenom,son_prenom))==0))
		//return 0;// eleve trouve
		printf("il est dans l ecole");
		//else
        //return-1 //qui renverra à saisir élève
		//printf ("la personne que vous cherchez n est pas dans cette ecole ;)");
        //else return 1;//eleve non trouve
        }
        
    }
    //return 1;//eleve non trouve
}


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
for (i=0;i<2;i++) // 2 pour le test a 2 classes
	{
		fprintf(save,"%s ; ",E->ClasseEcole[i].niveaux);
		//boucle dans le tableau d eleves
		for (j=0; j<3;j++) //3 pour le test 3 eleves
		{
			fprintf (save,"%s ; %s ; ",E->ClasseEcole[i].TabEleve[j].prenom,E->ClasseEcole[i].TabEleve[j].nom);
		}
    fprintf (save,"\n");
	}
//fermeture du fichier
fclose(save);
}
int main()
{
//int present;   
ecole_t monecole;
//NommerClasse(&monecole);
RemplirEcole(&monecole);
AfficherEcole(monecole);
RechercherEleve(monecole);
/*if (present == 0)
{
    printf("l eleve est dans l ecole\n");
}
else printf ("il n est pas dans l ecole\n");*/
sauvegardeFichier(&monecole);
//printf("%s",monecole.ClasseEcole[0].maitresse);
}