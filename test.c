#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main(){
    int *tab,N,nbr,pos,mn,mx,choix;
    printf("Entrer la dimention de votre tableau : \n");
    scanf("%d",&N);
    tab=malloc(N*sizeof(int));
    tab = saisie(tab,N);
    do{
        printf("Affciher votre tableau : 1\n");
        printf("Inserer un notre nombre dans votre tableau : 2\n");
        printf("Inverser votre tableau : 3\n");
        printf("Trier votre tableau : 4\n");
        printf("Afficher le maximum : 5\n");
        printf("Afficher le minimum : 6\n");
        printf("Quitter : 0\n");
        scanf("%d",&choix);
        switch(choix){
            case 0 :
             printf("Au revoir !");
            break;
            case 1 :
             affichage(tab,N);
            break;
            case 2 :
             printf("Entrer le nombre que vous voulez inserer : \n");
             scanf("%d",&nbr);
             printf("Entrer sa position : \n");
             scanf("%d",&pos);
             N=N+1;
             tab = realloc(tab, (N));
             tab = ins(tab,N,pos,nbr);
             affichage(tab,N);
            break;
            case 3 :
             printf("Tableu inverser : \n");
             tab= inv(tab,N);
             affichage(tab,N);
            break;
            case 4 :
              printf("Tableu triee : \n");
              tab= tri(tab,N);
              affichage(tab,N);
            break;
            case 5 :
              mx= max(tab,N);
              printf("la valeur maximale est : %d\n",mx);
            break;
            case 6 :
              mn= min(tab,N);
              printf("la valeur minimale est : %d\n",mn);
            break;
            default :
            printf("Choix non valide\n");
            break;
        }
    }while (choix!=0);
}