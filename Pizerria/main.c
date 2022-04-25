#include <stdio.h>
#include <string.h>
#include "pizzeria.h"


// main
int main()
{ ingredient_t fromage,lardon,tomate;
  Pizza_t Reine={ "reine",0,0,3, {fromage,lardon,tomate} }  ;
  Pizza_t Margarita= { "margarita",0 , 0 , 2,// on ne met pas de prix de vente ou de revient, on va les calculer
                        { { "tomate", 60.2, 3.2, {20,3, 2040}
                          },
                          fromage // ingredient 2

                        }// mon tableau

                     };
    //calcul du prix de revient de la margarita
    Margarita.prixrevient= Calcul(Margarita.TabIng, Margarita.nbing);
    Margarita.prixvente=Margarita.prixrevient*1.3;

    SaisirPizza(& Margarita);
    AfficherPizza(Margarita);

    //changer la date de peremtion du 1er ingredient de la margarita
    SaisirDate(& Margarita.TabIng[0].DLC);

    // appel des fonctions de tabpizza
    Pizza_t MesPizzas[4];
    SaisirTabPizza(MesPizzas,4); //esperluette ou pas ?not esperluette
    AfficherTabPizza(MesPizzas,4);

    Pizzeria_t ChezMario;
    SaisirPizzeria(& ChezMario);
    AfficherPizzeria(& ChezMario);// Attention au prototupe void AfficherPizzeria(const Pizzeria_t *P)
}


