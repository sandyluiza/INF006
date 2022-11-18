// 3 – Faça um programa que leia n nomes e ordene-os pelo tamanho utilizando o algoritmo da seleção. No final, o algoritmo deve mostrar todos os nomes ordenados.
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
  
  // selection sort
  int i, p, min, vi; 
  char aux[50];
  for (i = 0; i < n-1; i++)
  {
    min = i;
    for (p = i+1; p < n; p++) 
    {
      if(strlen(A[p]) < strlen(A[min]))
      {
        min = p;
      }
    }
    if (min != i) 
    {
      strcpy(aux, A[i]);
      strcpy(A[i], A[min]);
      strcpy(A[min], aux);
    }
    // printf("%s", A[i]);
  }

  
  
  printf("\nNomes \n");
  for (x = 0; x < n; x++)
  { 
    printf("%s\n", A[x]);
  }
  return 0;
}