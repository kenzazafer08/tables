#include <stdio.h>
#define D 10
int main(){
    int i,N,max,pos;
    int tab[D];
    int m;
     printf("Combien de nombre vous voulez stocker (max : 10) : ");
    scanf("%d",&N);
    m=N;
    for(i=0;i<N;i++){
        printf("case [%d] : ",i+1);
        scanf("%d",&tab[i]);
    }
    printf("\n----Votre tableau----");
    for(i=0;i<N;i++){
        printf("\n%d : %d",i+1,tab[i]);
       }
    printf("\n----Votre tableau triee----");
    while (N>0)
    { 
        max=tab[0];
        pos=0;
        for(i=0;i<N;i++){
            if(tab[i]>max){
             max=tab[i];
             pos=i;
            }
        }
        for(i=pos;i<N;i++){
            tab[i]=tab[i+1];
        }
        tab[N-1]=max;
        N--;
    }

    for(i=0;i<m;i++){
        printf("\n%d : %d",i+1,tab[i]);
       }
    }