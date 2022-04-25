#include "pizza.h"


void AfficherPizza(Pizza_t P)
{   int i;
    printf("mon pizza %s vendue à %lf et qui me coute %lf à fabriquer", P.nom, P.prixvente, P.prixrevient);
    // il me reste à afficher P.TabIng qui est un tableau d'ingredient
    //option 1 est d'utiliser la fonction AfficherTabIngredient
    AfficherTabIngredient(P.TabIng, P.nbing);
    // option 2 mais moins bien, mais comme mes stagiaires aiment jouer, on va jouer 
    // parcourrir le tableau et afficher cases par cas
    /*for(i=0;i<P.nbing;i++)
    {
        AfficherIngredient(P.TabIng[i]);
        //mieux jouer
        // afficher nom imregient
        printf("%s",P.TabIng[i].nom);
        // afficher date
        AfficherDate(P.TabIng[i].DLC);
        // bah... allons plus profond, affichage du mois
        printf("%d ",P.TabIng[i].DLC.mois);
    }*/


}

// calcul prix revient
double Calcul(ingredient_t tab[], int taille)
{
    double resultat=0; // genre vraiement pas l'oublier
    int i;
    for(i=0;i<taille;i++)
        resultat= resultat+tab[i].poids*tab[i].prixkg/1000; // on pense à rapporter le poids en kg

    return resultat;

}

void SaisirPizza(Pizza_t *P)
{   int i;
    printf("saisir le nom de la pizza");
    scanf("%s",P->nom);
    printf("saisir lnombre d'ingredients");
    scanf("%d",& P->nbing);
    // solutin la plus simple
    SaisirTabIngredient(P->TabIng, P->nbing);
    /* // solution moins esthétique
    for(i=0;i<P->nbing;i++)
    {
        SaisirIngredient(& P->TabIng[i]);
        //vpour le nom de l'ingredient
        scanf("%s",P->TabIng[i].nom );
        SaisirDate(&P->TabIng[i].DLC);
        scanf("%d",& P->TabIng[i].DLC.mois)
    }
    */
   // caclul du prix de revient avec une fonction => ATTENTION a la coder avant l'appel
    P->prixrevient= Calcul(P->TabIng, P->nbing);
    //caluler le prix de vente: 30% de plus
    P->prixvente = P->prixrevient *1.3;

}

void SaisirTabPizza(Pizza_t *TAB, int taille)//* de tableau, pas de pointeru...
{
    int i;
    int j;
    for(i=0;i<taille;i++)// parcourir le tableau de pizza
        {
            SaisirPizza(& TAB[i]);// vous avez RAISON !!! la formatrice est trop fiere de vous !!!
           /* // pour jouer, saisir manuellement les ingredients de la pizza
            for(j=0;j<TAB[i].nbing ; j++)// parcourir tableau d'ingredient
                {SaisirIngredient(&TAB[i].TabIng[j]);
                // modifier la date aussi par une saisie
                SaisirDate(&TAB[i].TabIng[j].DLC);
                }
                */
        }
}

void AfficherTabPizza(const Pizza_t *TAB, int taille)//cconst pour pas modifer le tableau par erreur
{
    int i;
    int j; // pour chaque ingrdient
    for(i=0;i<taille;i++)
    {
        AfficherPizza(TAB[i]);// nickel
        // je veux afficher les ingredients de chaque pizza
    
       /* AfficherTabIngredient(TAB[i].TabIng, TAB[i].nbing);
        // on veut afficher toutes les dates de peremption
        for(j=0;j<TAB[i].nbing ; j++)
          {  AfficherDate(TAB[i].TabIng[j].DLC);
            // truandons les dates d'un an 
             TAB[i].TabIng[j].DLC.an=TAB[i].TabIng[j].DLC.an+1;
          }*/
    }
}





