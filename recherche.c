#include <stdio.h>
#define D 10
int main(){
    int i,N,c,cmp=0;
    int tab[D];
     printf("Combien de nombre vous voulez stocker (max : 10) : ");
    scanf("%d",&N);
    for(i=0;i<N;i++){
        printf("case [%d] : ",i+1);
        scanf("%d",&tab[i]);
    }
    printf("\n----Votre tableau----");
    for(i=0;i<N;i++){
        printf("\n%d : %d",i+1,tab[i]);
       }
    printf("\nEntrer l'element a chercher : ");
    scanf("%d",&c);
    for(i=0;i<N;i++){
        if(tab[i]==c){
            cmp++;
        }
    }if(cmp==0){
        printf("\nCette valeur n'existe pas dans ce tableau !");
    }printf("\nL'eleemnt %d existe dans ce tableau %d fois !",c,cmp);
    }