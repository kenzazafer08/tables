#include <stdio.h>
void main()
{
  int matrice[10][10][10];
  int i, j,z, row, col,D,somme=0;
  
   printf(" Entrez la premier taille (max 10): ");
   scanf("%d",&row);
   printf(" Entrez la dexieme taille (max 10): ");
   scanf("%d",&col);
   printf(" Entrez la troixeme taille (max 10): ");
   scanf("%d",&D);
   printf(" Entrez les %d elements de tableau : \n",row*col*D);
  
  for(i = 0; i < row; i++)
  {
    for(j = 0; j < col; j++)
    {
        for(z = 0;z<D;z++){
            printf("case [%d][%d][%d] = ",i+1,j+1,z+1);
            scanf("%d",&matrice[i][j][z]);
        }
      
    }
  }
  printf(" Le tableau 3D = \n");
  printf("\n");
  for(i=0; i < row; i++)
  {
    for(j = 0; j < col; j++)
    {
        for(z = 0; z < D ; z++ ){
            printf("case [%d][%d][%d] = ",i+1,j+1,z+1);
            printf("%d",matrice[i][j][z]);
            printf("\n");
        }
     
    }
    printf("\n");
  }
}