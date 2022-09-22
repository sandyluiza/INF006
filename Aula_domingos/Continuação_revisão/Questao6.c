// Criar o codigo para solução das seguintes questões:
// 6)  Que leia e armazene os elemntos de uma matriz inteira (10,10) e imprima. depois troque os dados da segunda linha pela oitava. da quarta pela decima, a diagonal principal pela diagonal segundaria. 
#include <stdio.h>

int main()
{
  #define tam 5
  int matriz[tam][tam], i, j, t=0, u=0, v=0, w=0;

  printf("Informe a matriz\n");
  
  for (i=0;i<tam;i++)
  {
    for(j=0;j<tam;j++)
    {
      // t = i+1;
      // u = j+1;
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("\nOs elementos da matriz são:\n");
  for (i=0;i<tam;i++)
  {
    for(j=0;j<tam;j++)
    {
      v = i+1;
      w = j+1;
      printf("Elemento[%d][%d]: %d\n", v, w, matriz[i][j]);
    }  
  }


  terminar
}