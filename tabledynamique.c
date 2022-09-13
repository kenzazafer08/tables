#include <stdio.h>
#include <stdlib.h>

int main(){
int *t1, *t2 , *t;
int m,n,i,j,max,max1,min,min1,somme=0,somme1=0,max2,min2,somme2=0;
float moyenne,moyenne1,moyenne2;
printf("donner la taille du premier tableau : \n");
scanf("%d",&n);
printf("donner la taille du dexieme tableau : \n");
scanf("%d",&m);
t1=malloc(n* sizeof(int));
t2=malloc(m* sizeof(int));
t=malloc((n+m)* sizeof(int));
printf("Entrez les elements du premier tableau: \n");
    for (i = 0; i < n ; i++){
    printf("table[%d]:",i+1);
    scanf("%d", t1+i);
    max=t1[0];
    min=t1[0];
    somme=somme+t1[i];
}
 moyenne=somme/n;
printf("Entrez les elements du dexieme tableau: \n");
    for (i = 0; i < m ; i++){
            printf("table[%d]:",i+1);
        scanf("%d", t2+i);
        max1=t2[0];
        min1=t2[0];
        somme1=somme1+t2[i];
}
 moyenne1=somme1/m;
printf("\n----Vos tableaux----");
printf("\n----Premier tableau----");
    for(i=0;i<n;i++){
        printf("\n%d : %d",i+1,t1[i]);
    if(t1[i]>max){
       max=t1[i];
       }
    if(t1[i]<min){
       min=t1[i];
       }
    }
    printf("\nLa valeur maximale est : %d",max);
    printf("\nLa valeur minimale est : %d",min);
    printf("\nLa somme des valeurs est : %d",somme);
    printf("\nLa moyenne des valeurs est : %.2f",moyenne); 
    printf("\n----Dexieme tableau----");
    for(i=0;i<m;i++){
        printf("\n%d : %d",i+1,t2[i]);
    if(t2[i]>max1){
       max1=t2[i];
       }
    if(t2[i]<min1){
       min1=t2[i];
       }
    }
    printf("\nLa valeur maximale est : %d",max1);
    printf("\nLa valeur minimale est : %d",min1);
    printf("\nLa somme des valeurs est : %d",somme1);
    printf("\nLa moyenne des valeurs est : %.2f",moyenne1); 
    for(i=0;i<n;i++){
        *(t+i)=*(t1+i);
        max2=*t;
        min2=*t;
        somme2=somme2+t[i];
    }
    int d = n+m;
    for(i = 0, j = n; j < d && i < m; i++, j++)
    {
       *(t+j)=*(t2+i);
        somme2=somme2+t[j];
    }
   moyenne2=somme2/d;
   printf("\n---Le tableau fusionné---");
   for(i=0;i<d;i++){
        printf("\n%d : %d",i+1,t[i]);
    if(t[i]>max2){
       max2=t[i];
       }
    if(t[i]<min2){
       min2=t[i];
       }
    }
    printf("\nLa valeur maximale est : %d",max2);
    printf("\nLa valeur minimale est : %d",min2);
    printf("\nLa somme des valeurs est : %d",somme2);
    printf("\nLa moyenne des valeurs est : %.2f",moyenne2); 
return 0;
}
    
