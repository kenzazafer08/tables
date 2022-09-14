#include <stdio.h>
#define D 10
int main(){
    int j,i,N,c=0;
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
    printf("\n----Votre tableau triee----");
    for(i=0;i<N;i++){
        c=tab[i];
        j=i-1;
        while (j >= 0 && tab[j] > c) {
        
         tab[j+1] = tab[j];
        
      j--;
    }tab[j+1]=c;
    }
    for(i=0;i<N;i++){
        printf("\n%d : %d",i+1,tab[i]);
       }
    }