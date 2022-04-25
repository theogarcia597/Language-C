#include "date.h"




void AfficherDate(Date_t D)
{
    printf("voici la date %d/%d/%d",D.jour,D.mois,D.an);
}

void SaisirDate(Date_t *D)// pointeur quand je veux modifier
{
    printf("saisir date (au format jj/mm/aaaa");
    scanf("%d/%d/%d",&D->jour, & D->mois, & D->an);//D est un pointeur donc fleche
}

void AfficherTabDate(int taille, Date_t TAB[])
{
    int i;
    for(i=0;i<taille;i++)
    {
       // printf("le jour %d est %d\n",i, TAB[i].jour);
       AfficherDate(TAB[i]);
       printf("\n");
    }
}