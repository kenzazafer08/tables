#include <stdio.h>
#include <stdlib.h>

int* saisie(int *tab,int N){
    
    int i;
    for(i=0;i<N;i++){
     printf("case [%d] : ",i+1);
     scanf("%d",tab+i);
    }
    return tab;
}
void affichage(int *tab,int N){
    printf("\n---Votre tableau---\n");
    int i;
    for(i=0;i<N;i++){
     printf("case %d = %d\n",i+1,tab[i]);
    }
}
int* tri(int *tab,int N){
    int i,j,c;
    for(i=0;i<N-1;i++){
        for(j=i+1;j<N;j++){
            if ( tab[i] < tab[j] ) {
            c = tab[i];
            tab[i] = tab[j];
            tab[j] = c;
          } 
        }
    }return tab;
}
int* inv(int *tab,int N){
    int i,j,c;
    for(i=0;i<N-1;i++){
        for(j=i+1;j<N;j++){
            if ( tab[i] < tab[j] ) {
            c = tab[i];
            tab[i] = tab[j];
            tab[j] = c;
          } 
        }
    }return tab;
}
int* ins(int *tab,int N,int pos,int nbr){
    int i;
    
    if(pos<0 || pos>N+1){
        printf("Position non valide !");
    }else
    for (i = N; i >= pos; i--){
        tab[i]=tab[i-1];
    }
    tab[pos-i]=nbr;
    return tab;
}