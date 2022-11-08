// 2 – Crie um programa que dado uma string, coloque as letras dela em ordem crescente pelo algoritmo da bolha.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 50

int main()
{
  char vetor[n] 
  int i, j, h, g, aux;
    
  printf("Informe a string ");
  fgets(vetor, 50, stdin);
  size_t l2 = strlen(vetor) - 1;
  if (vetor[l2] == '\n')
  {
    vetor[l2] = '\0';
  }
  
  for (g=0; g<(strlen(vetor)); g++)
  {
    printf("%d", vetor[g]);    
  }
  
  for (i=0; i<(strlen(vetor); i++)
  {
    for (j=0; j<(strlen(vetor); j++)
    {
      if (vetor[i]<vetor[j])
      {
        aux = vetor[j];
        vetor[j] = vetor[i];
        vetor[i] = aux;
        printf("\n");
        for (h=0; h<(strlen(vetor); h++)
        {
          printf("%d", vetor[h]);    
        }
      }
      printf("\n");
    }
    
  }
  // for (i=0; i<8; i++)
  // {
  //   printf("%d", vetor[i]);    
  // }

  return 0;
}