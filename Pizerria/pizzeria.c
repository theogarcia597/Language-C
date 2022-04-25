#include "pizzeria.h"


void SaisirPizzeria(Pizzeria_t *P)
{
    printf("saisir pizzeria");
    scanf("%s",P->nompizzeria);
    printf("saisir nombre de pizza à la cate");
    scanf("%d",& P->nbpizza);
    SaisirTabPizza(P->TabPizza,P->nbpizza);
// ok tout va bien, soyez surs de vous :-D
}

// equivalent à  void AfficherPizzeria( Pizzeria_t P)
void AfficherPizzeria(const Pizzeria_t *P)
{
    printf("bienvenue à la pizzeria %s",P->nompizzeria);
    AfficherTabPizza(P->TabPizza,P->nbpizza);
    /*
    // afficher le jour de peremption du 1er ingredient de la 1ere pizza
    printf("%d",P->TabPizza[0].TabIng[0].DLC.jour);
    AfficherDate(P->TabPizza[0].TabIng[0].DLC)
    */

}















