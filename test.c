#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main(){
    int *tab,N,nbr,pos;
    printf("Entrer la dimention du tableau : ");
    scanf("%d",&N);
    tab=malloc(N*sizeof(int));
    tab = saisie(tab,N);
    affichage(tab,N);
    printf("Tableu triee : ");
    tab= tri(tab,N);
    affichage(tab,N);
    printf("Tableu inverser : ");
    tab= inv(tab,N);
    affichage(tab,N);
    printf("Entrer le nombre que vous voulez inserer : ");
    scanf("%d",&nbr);
    printf("Entrer sa position : ");
    scanf("%d",&pos);
    N=N+1;
    tab = realloc(tab, (N));
    tab = ins(tab,N,pos,nbr);
    affichage(tab,N);
}