// Criar o codigo para solução das seguintes questões:
// 8) Que deixe entrar com valores de uma matriz de ordem cinco e verificar se ela é ou nao uma matriz triangular superior.
// P.S. Matriz triangular superior é uma matriz onde todos elementos de posições L<C são diferentes de 0 e todos os elementos de L>C são iguais a 0
#include <stdio.h>

int main()
{
  #define tam 5
  int matriz[tam][tam], i, j, t=0, u=0, v=0, w=0, cont = 0;

  printf("Informe a matriz\n");
  
  for (i=0;i<tam;i++)
  {
    for(j=0;j<tam;j++)
    {
      scanf("%d", &matriz[i][j]);
    }
  }

  for (i=0;i<tam;i++)
  {
    for(j=0;j<tam;j++)
    { 
      if (i>j && (matriz[i][j]!=0))
      {
        cont = cont + 1;
      }
      else if (i<j && (matriz[i][j]==0))
      {
        cont = cont + 1;
      }
      else
      {
        cont = cont;
      }
    }
  }

  if (cont == 0)
  {
    printf("É uma matriz triangular superior.\n");
  }
  else
  {
    printf("Não é uma matriz triangular superior.\n");
  }
}