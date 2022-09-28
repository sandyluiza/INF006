// Criar o codigo para solução das seguintes questões:
// 5) Que leia os elemntos de uma matrix 10x10 e mostre somente os elementos abaixo da diagonal;
#include <stdio.h>

int main()
{
  #define tam 10
  int matriz[tam][tam], i, j, t=0, u=0, v=0, w=0;
  for (i=0;i<tam;i++)
  {
    for(j=0;j<tam;j++)
    {
      t = i+1;
      u = j+1;
      printf("Informe o elemento da matriz[%d][%d] ",t,u);
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("\nOs elementos que estão abaixo da diagonal são:\n");
  for (i=0;i<tam;i++)
  {
    for(j=0;j<tam;j++)
    {
      if (i>j)
      {
        v=i+1;
        w=j+1;
        printf("Elemento[%d][%d]: %d\n", v, w, matriz[i][j]);
      }  
    }
  }
}