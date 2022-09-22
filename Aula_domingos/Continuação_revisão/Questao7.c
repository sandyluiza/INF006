// Criar o codigo para solução das seguintes questões:
// 7) Que declare uma matriz 5x5  e armazene em um vetor o maior elemento cadastrado em cada coluna da matriz, e em um vetor b o menor elemento cadastrado em cada coluna da matriz e imprima: a) toda a matrix; b) o vetor a; c) o vetor b; d)(a=b)/2
#include <stdio.h>

int main()
{
  #define tam 5
  int matriz[tam][tam], i, j, vetor_a[tam], vetor_b[tam], maior=0, menor=99999;

  printf("Informe a matriz\n");
  for (i=0;i<tam;i++)
  {
    for(j=0;j<tam;j++)
    {
      scanf("%d", &matriz[i][j]);
      
      if(maior<matriz[i][j]) //Definindo o maior
      {
        maior = matriz[i][j];
      }
      
      if(menor>matriz[i][j]) //Definindo o menor
      {
        menor = matriz[i][j];
      }
    }
    vetor_a[i] = maior;
    vetor_b[i] = menor;
    maior=0;
    menor = 999999;
  }

  // printf("\nOs elementos da matriz são:\n");
  printf("\n");
  printf("Matriz:\n");
  for (i=0;i<tam;i++)
  {
    for(j=0;j<tam;j++)
    {
      printf("%d ", matriz[i][j]);
    } 
    printf("\n");

  }
  
  printf("\n");
  printf("Maiores:\n");
  for (i=0;i<tam;i++)
  {
    printf("%d ", vetor_a[i]);
  }
  
  printf("\n");
  printf("\n");
  printf("Menores:\n");
  for (i=0;i<tam;i++)
  {
    printf("%d ", vetor_b[i]);
  }
  printf("\n");
}
TERMINAR TROCAR LINHA POR COLUNA