#include <stdio.h>
void main()
{
  int matrice[10][10];
  int i, j, row, col;
  
   printf(" Entrez le nombre de lignes (max 10): ");
   scanf("%d",&row);
   printf(" Entrez le nombre de colonne (max 10): ");
   scanf("%d",&col);
   printf(" Entrez les %d elements de tableau : ",row*col);
  
  for(i = 0; i < row; i++)
  {
    for(j = 0; j < col; j++)
    {
      printf("case [%d][%d] = ",i+1,j+1);
      scanf("%d",&matrice[i][j]);
    }
  }
  printf("\n Le tableau 2D = \n");
  for(i=0; i < row; i++)
  {
    for(j = 0; j < col; j++)
    {
      printf("%4d",matrice[i][j]);
    }
    printf("\n");
  }
}