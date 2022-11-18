// 1 – Faça um programa que leia n nomes inserindo-os em uma lista de forma ordenada utilizando a ideia do algoritmo da inserção. No final, o programa deve mostrar todos os nomes ordenados alfabeticamente.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int n=2, k, x, j;
  char chave[20], A[n][20];
  printf("Informe quantos nomes deseja inserir ");
  scanf("%d", &n);
  
  getchar();
  for (x = 0; x < n; x++)
  {
    printf("Informe o nome ");
    fgets(A[x], 20, stdin);
    size_t l1 = strlen(A[x]) - 1;
    if (A[x][l1] == '\n')
    {
      A[x][l1] = '\0';
    }
  }
  
  // insertion sort
  for (k = 1; k <= n-1; k++)
  {
    strcpy(chave, A[k]);
    j = k - 1;
    while ((j >= 0) && (*chave < *A[j]))
    {
      strcpy(A[j+1], A[j]);
      j--;
    }
    strcpy(A[j+1], chave);
  }
  
  printf("\nNomes \n");
  for (x = 0; x < n; x++)
  { 
    printf("%s\n", A[x]);
  }
  return 0;
}