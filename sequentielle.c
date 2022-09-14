#include<stdio.h>

void main()
{
	int n, i, T[30], x, e;
	printf("Entrer la taille du tableau: ");
	scanf("%d",&n);	
	printf("\nRemplissage du tableau: \n");	
    for(i=0; i<n; i++){
   		printf("Entrer l'element %d :", i+1);
   		scanf("%d",&T[i]);
	}  
	printf("\nEntrer la valeur a chercher: ");
	scanf("%d",&x);	
	e = 0;
	for(i=0; i<n; i++){
   		if(T[i] == x){
   			e += 1;
   			break;
		}   			
	} 
	
	if(e == 0)
		printf("\nLa valeur %d n'existe pas dans le tableau.", x);
	else
		printf("\nLa valeur %d existe %d fois dans le tableau.", x,e);
}
