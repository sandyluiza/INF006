// Criar o codigo para solução das seguintes questões:
// 6)  Que leia e armazene os elemntos de uma matriz inteira (10,10) e imprima. depois troque os dados da segunda linha pela oitava. da quarta pela decima, a diagonal principal pela diagonal segundaria. 
#include <stdio.h>

int main()
{
  #define tam 10
  int matriz[tam][tam], i, j, t=0, u=0, v=0, w=0, aux[tam], aux_1[tam], aux_2[tam];

  // Lendo a matriz
  printf("Informe a matriz\n");
  for (i=0;i<tam;i++)
  {
    for(j=0;j<tam;j++)
    {
      scanf("%d", &matriz[i][j]);
    }
  }
  // Imprimindo a matriz
  printf("\nMatriz:\n");
  for (i=0;i<tam;i++)
  {
    for(j=0;j<tam;j++)
    {
      printf("%d ", matriz[i][j]);
    }  
    printf("\n");
  }
  
  // Trocar linha da matriz
  for (i=0;i<tam;i++)
  {
    aux[i] = matriz[1][i];
    matriz[1][i] = matriz[7][i];
    matriz[7][i] = aux[i];

    aux_1[i] = matriz[3][i];
    matriz[3][i] = matriz[9][i];
    matriz[9][i] = aux_1[i];
  }
  
  for (i=0;i<tam;i++)
  {
    for(j=0;j<tam;j++)
    {
      if (i==j)
      {
        aux_2[j] = matriz[i][j+1];
        matriz[i][j+1] = matriz[i][j];
        matriz[i][j] = aux_2[j];
        matriz[tam-1][tam-1] = 0;
      }
    }
  }
  
  printf("\nMatriz após modificações1:\n");
  for (i=0;i<tam;i++)
  {
    for(j=0;j<tam;j++)
    {
      printf("%d ", matriz[i][j]);
    }  
    printf("\n");
  }
}