#include "ecole.h"

void SaisirEcole(ecole_t *E)
{
	// choix de puts afin de pouvoir lire une ligne et permettre a l utilisateur de saisir des espaces dans le nom de l ecole
    printf("Veuillez saisir le nom de votre ecole (sans espace, les remplacer par _)\n");
	//saisie de la ligne du nom de l ecole dans la chaine de caractères nomEcole
    scanf("%s",E->nomEcole); 
    //gets(E->nomEcole);
}

        /****************************************************************************************************************************/


void RemplirEcole(ecole_t *E)
{
int i;//i le nombre total d eleves dans l ecole
int j=0;// nombre eleves CP
int k =0;// nombres eleves CE1
int l =0;// nombre eleves CE2
int m =0;// nombre eleves CM1
int n =0;// nombre eleves CM2
eleve_t temp;// pour stockage saisie
SaisirEcole(E);// pour donner un nom a  l ecole
   
   for (i=0; i<5;i++)//boucle sur le nombre total d eleves dans l ecole (reduit a 5 pour les tests)
   {
        SaisirEleve(&temp);
        //Comparaison de la naissance saisie avec la date de la classe pour ranger
        if (temp.naissance.tm_year==2015)
        {
                strcpy (E->ClasseEcole[0].TabEleve[j].prenom,temp.prenom);
                strcpy (E->ClasseEcole[0].TabEleve[j].nom,temp.nom);
                E->ClasseEcole[0].TabEleve[j].naissance.tm_mday =temp.naissance.tm_mday;
                E->ClasseEcole[0].TabEleve[j].naissance.tm_mon =temp.naissance.tm_mon;
                E->ClasseEcole[0].TabEleve[j].naissance.tm_year =temp.naissance.tm_year;
                j++;
        }
        
        if (temp.naissance.tm_year==2014)
        {
                strcpy (E->ClasseEcole[1].TabEleve[k].prenom,temp.prenom);
                strcpy (E->ClasseEcole[1].TabEleve[k].nom,temp.nom);
                E->ClasseEcole[1].TabEleve[k].naissance.tm_mday =temp.naissance.tm_mday;
                E->ClasseEcole[1].TabEleve[k].naissance.tm_mon =temp.naissance.tm_mon;
                E->ClasseEcole[1].TabEleve[k].naissance.tm_year =temp.naissance.tm_year;
                k++;
        }
        if (temp.naissance.tm_year==2013)
        {
                strcpy (E->ClasseEcole[2].TabEleve[l].prenom,temp.prenom);
                strcpy (E->ClasseEcole[2].TabEleve[l].nom,temp.nom);
                E->ClasseEcole[2].TabEleve[l].naissance.tm_mday =temp.naissance.tm_mday;
                E->ClasseEcole[2].TabEleve[l].naissance.tm_mon =temp.naissance.tm_mon;
                E->ClasseEcole[2].TabEleve[l].naissance.tm_year =temp.naissance.tm_year;
                l++;
        }
        if (temp.naissance.tm_year==2012)
        {
                strcpy (E->ClasseEcole[3].TabEleve[m].prenom,temp.prenom);
                strcpy (E->ClasseEcole[3].TabEleve[m].nom,temp.nom);
                E->ClasseEcole[3].TabEleve[m].naissance.tm_mday =temp.naissance.tm_mday;
                E->ClasseEcole[3].TabEleve[m].naissance.tm_mon =temp.naissance.tm_mon;
                E->ClasseEcole[3].TabEleve[m].naissance.tm_year =temp.naissance.tm_year;
                m++;
        }
        if (temp.naissance.tm_year==2011) 
        {
                strcpy (E->ClasseEcole[4].TabEleve[n].prenom,temp.prenom);
                strcpy (E->ClasseEcole[4].TabEleve[n].nom,temp.nom);
                E->ClasseEcole[4].TabEleve[n].naissance.tm_mday =temp.naissance.tm_mday;
                E->ClasseEcole[4].TabEleve[n].naissance.tm_mon =temp.naissance.tm_mon;
                E->ClasseEcole[4].TabEleve[n].naissance.tm_year =temp.naissance.tm_year;
                n++;
        }
   }

   // saisie des maitresse par classe
    printf ("Saisir le nom de la maitresse de la Classe CP\n");
   scanf ("%s",E->ClasseEcole[0].maitresse);
   printf ("Saisir le nom de la maitresse de la Classe CE1\n");
   scanf ("%s",E->ClasseEcole[1].maitresse);
   printf ("Saisir le nom de la maitresse de la Classe CE2\n");
   scanf ("%s",E->ClasseEcole[2].maitresse);
   printf ("Saisir le nom de la maitresse de la Classe CM1\n");
   scanf ("%s",E->ClasseEcole[3].maitresse);
   printf ("Saisir le nom de la maitresse de la Classe CM2\n");
   scanf ("%s",E->ClasseEcole[4].maitresse);
}


        /****************************************************************************************************************************/



void AfficherEcole(ecole_t E)
{
    int i=0;
    int j=0;
    for (i=0;i<5;i++)
    {
        printf("le nom de la maitresse de la classe est : %s\n",E.ClasseEcole[i].maitresse);
        for (j=0; j<2;j++)
        {
        printf ("nom : %s , prenom : % s , ne le %d/%d/%d\n",E.ClasseEcole[i].TabEleve[j].nom,E.ClasseEcole[i].TabEleve[j].prenom, E.ClasseEcole[i].TabEleve[j].naissance.tm_mday,E.ClasseEcole[i].TabEleve[j].naissance.tm_mon,E.ClasseEcole[i].TabEleve[j].naissance.tm_year);
        }
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
 printf("Veuillez saisir le nom et le prenom de l eleve a rechercher (separes par un espace, ex: Martin Durand)");
            printf("\nSi il ne vous affiche rien c'est que l'élève n'est pas dans l'école.\n");
            scanf ("%s %s",son_nom,son_prenom);


//boucle pour parcourir le tableau de classes

    for (i=0;i<2;i++)
        {
            // boucle pour parcourir le tableau d eleves
            for (j=0;j<3;j++) //j équivaut au nombre d'élève réduit à 3 pour les test 
            {

            //verification que le nom et le prenom sont identique
            if (((strcmp (E.ClasseEcole[j].TabEleve[i].nom,son_nom))==0) && ((strcmp (E.ClasseEcole[j].TabEleve[i].prenom,son_prenom))==0))
            {//return 0;// eleve trouve
                printf("Il est dans l ecole. \n");
            }
            //return-1 //qui renverra à saisir élève
            //printf ("la personne que vous cherchez n est pas dans cette ecole ;)");
            //else return 1;//eleve non trouve
           
            }

            
        }
 
}
void sauvegardeFichier(const ecole_t *E)
{
//declaration des variables
// save sera le descripteur
FILE*save;
int i; // pour boucler dans le tableau des classes
int j; // pour boucler dans le tableau des eleves
//ouverture du ficher de sauvegarde en ecriture
save = fopen("sauvegardeecole.xls","w");
// Verification du fichier
if (save==NULL)
    {perror("Impossible d'ouvrir le fichier");
    exit(EXIT_FAILURE);
    }
//Ecriture du tableau classe dans le fichier
//boucle dans le tableau de classes
    for (i=0;i<5;i++) // 2 pour le test a 2 classes
    {
    fprintf(save,"%s ; ",E->ClasseEcole[i].maitresse);
    //boucle dans le tableau d eleves
    for (j=0; j<125;j++) //3 pour le test 3 eleves
    {
    fprintf (save,"%s ; %s ; %02d/%02d/%04d ; \n",E->ClasseEcole[i].TabEleve[j].prenom,E->ClasseEcole[i].TabEleve[j].nom,E->ClasseEcole[i].TabEleve[j].naissance.tm_mday,E->ClasseEcole[i].TabEleve[j].naissance.tm_mon,E->ClasseEcole[i].TabEleve[j].naissance.tm_year);
    }
    fprintf (save,"\n");
    } 
//fermeture du fichier
fclose(save);
}
