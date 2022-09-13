#include <stdio.h>
#define D 10
int main(){
    int j,i,N,nb=0;
    int tab[D],inv[D];
    int min,max,somme=0,moyenne,c;
    printf("Combien de nombre vous voulez stocker (max : 10) : ");
    scanf("%d",&N);
    for(i=0;i<N;i++){
        printf("case [%d] : ",i+1);
        scanf("%d",&tab[i]);
        max=tab[0];
        min=tab[0];
        somme=somme+tab[i];
    }
    moyenne=somme/N;
    printf("\n----Votre tableau----");
    for(i=0;i<N;i++){
        printf("\n%d : %d",i+1,tab[i]);
    if(tab[i]>max){
       max=tab[i];
       }
    if(tab[i]<min){
       min=tab[i];
       }
    }
    for(i=0;i<N;i++){

    }
    for (i = N- 1, j = 0; i >= 0; i--, j++){inv[j] =tab[i];}
    for (i = 0; i < N; i++){tab[i] = inv[i];}
        
    
   
    printf("\n");
    printf("\nLa valeur maximale est : %d",max);
    printf("\nLa valeur minimale est : %d",min);
    printf("\nLa somme des valeurs est : %d",somme);
    printf("\nLa moyenne des valeurs est : %d",moyenne); 
    printf("\n");
    printf("\nLe tableau inverse est: ");
    for (i = 0; i < N; i++){
        printf("\n%d : %d",i+1,tab[i]);}
    printf("\nChercher le nombre d'occurence d'une valeur : ");
    scanf("%d",&c);
    for(i=0;i<N;i++){
        if(tab[i]==c){
            nb++;
        }
    }if(nb==0){
        printf("Pas de %d dans ce tableau",c);
    }else printf("%d se trouve %d dans ce tableau",c,nb);
    return 0;
}