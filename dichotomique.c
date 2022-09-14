#include<stdio.h>
#include "function.h"
int main(){

int *iTableau; 
int iRecherche,i,N; 
int iPremier; 
int iDernier; 
int iMilieu;
int iTrouve; 

printf("Combien de nombre vous voulez stocker (max : 10) : ");
    scanf("%d",&N);
    iTableau=malloc((N)* sizeof(int));
    for(i=0;i<N;i++){
        printf("case [%d] : ",i+1);
        scanf("%d",&iTableau[i]);
    }
    printf("\n----Votre tableau----");
    for(i=0;i<N;i++){
        printf("\n%d : %d",i+1,iTableau[i]);
       }
       
    printf("\n");
    printf("Quel element recherchez-vous ? ");
    scanf("%d",&iRecherche);
   iPremier=0;
   iDernier=N-1;
   iTrouve=0;
   while((iPremier <= iDernier)&&(iTrouve==0))
      {
           iTableau=tri(iTableau,N);
           iMilieu=(iPremier+iDernier)/2;
           if(iTableau[iMilieu]==iRecherche){
            iTrouve =1;
           } 
           else
                 {
                 if(iTableau[iMilieu]>iRecherche) iDernier = iMilieu -1;
                 else iPremier = iMilieu +1;
                 }
          }
          if(iTrouve==0) printf("Cette valeur n'appartient pas a la liste\n");
           else printf("Cette valeur %d appartient a la liste\n",iRecherche);
        
    } 