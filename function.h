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
            if ( tab[i] > tab[j] ) {
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
int max(int *tab,int N){
    int i,max=tab[0];
    for(i=0;i<N;i++){
        if(tab[i]>max){
            max=tab[i];
        }
    }return max;
}
int min(int *tab,int N){
    int i,min=tab[0];
    for(i=0;i<N;i++){
        if(tab[i]<min){
            min=tab[i];
        }
    }return min;
}
void search(int *T,int n){
    int x,e,i;
    printf("Entrer la valeur a chercher: ");
	scanf("%d",&x);	
	
	e = 0;
	for(i=0; i<n; i++){
   		if(T[i] == x){
   			e += 1;
   			break;
		}   			
	} 
	
	if(e == 0)
		printf("La valeur %d n'existe pas dans le tableau.\n", x);
	else
		printf("La valeur %d existe %d fois dans le tableau.\n", x,e);
}