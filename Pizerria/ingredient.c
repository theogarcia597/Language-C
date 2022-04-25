#include "ingredient.h"


void AfficherIngredient(ingredient_t I)
{   printf("ingredient %s de %lf en grammes et coute %lf euros",I.nom, I.poids, I.prixkg);
    // pour la DLC impossible d'imprimer d'un bloc avec un printf => on utilise le fonction qui va bien
    AfficherDate(I.DLC);
    // mais nina aime jouer...
    //printf("année de la DLC %d",I.DLC.an);
}

void SaisirIngredient(ingredient_t *I)
{
  printf("saisir nom ingredient, poid et prix kg");
  scanf("%s %lf %lf",I->nom  ,& I->poids , & I->prixkg);
  
  //saisir la DLC
  SaisirDate(& I->DLC);
  // pour jouer
  //scanf("%d",& I->DLC.an );
}

void AfficherTabIngredient(const ingredient_t *Tab, int taille)
{   int i;
    // TAB qui est un tableau d'ingredient
    // TAB[i] qui est un ingedient
    // DANGER vous suiviez plus ? for(i=1; i<=taille; i++)
     for(i=0; i<taille; i++)
        {
            AfficherIngredient(Tab[i]);// roger tout va bien !
            /*
            // jouons....
            // afficher le poids
            printf("%lf",Tab[i].poids);
            // afficher l'année
            printf("%d",Tab[i].DLC.an) */
        }
}

void SaisirTabIngredient(ingredient_t Tab[], int taille)
{
     int i;
     //tab[i] est un ingredient
     for(i=0;i<taille;i++)
     { 
         SaisirIngredient(&Tab[i]);
       /*  // saisir le nom de l'ingredient
         scanf("%s", Tab[i].nom ); // %s => not esperluette
         // modifier le jour
        scanf("%d", &Tab[i].DLC.jour);
        // modifier la date d'un coup avec une fonction
        SaisirDate(& Tab[i].DLC); */
     }

}