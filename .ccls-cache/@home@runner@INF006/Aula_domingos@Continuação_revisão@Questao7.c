// Criar o codigo para solução das seguintes questões:
// 7) Que declare uma matriz 5x5  e armazene em um vetor o maior elemento cadastrado em cada coluna da matriz, e em um vetor b o menor elemento cadastrado em cada coluna da matriz e imprima: a) toda a matrix; b) o vetor a; c) o vetor b; d)(a+b)/2
#include <stdio.h>

int main()
{
  #define tam 5
  int matriz[tam][tam], i, j, vetor_a[tam], vetor_b[tam], maior=0, menor=99999, resultado;

  // Lendo a matriz
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
      // Definindo o maior
      if(maior<matriz[j][i]) 
      {
        maior = matriz[j][i];
      }
      
      //Definindo o menor
      if(menor>matriz[j][i]) 
      {
        menor = matriz[j][i];
      }
    }
    vetor_a[i] = maior;
    vetor_b[i] = menor;
    maior=0;
    menor = 999999;
  }
    

  // Imprimindo a matriz
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
  printf("\n");

  // Fazendo a + b / 2
  printf("(a+b)/2:\n");
  for (i=0;i<tam;i++)
  {
    resultado = (vetor_a[i] + vetor_b[i])/2;
    printf("%d ", resultado);
  }
  printf("\n");
}
