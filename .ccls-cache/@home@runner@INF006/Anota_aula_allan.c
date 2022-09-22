#include <stdio.h>
int main()
{
  int vetor[8] = {3, 1, 4, 7, 2, 6, 8, 5}, i, j, h, g, aux;
  // printf("%d", vetor[1]);
  for (g=0; g<8; g++)
  {
    printf("%d", vetor[g]);    
  }
  
  for (i=0; i<8; i++)
  {
    for (j=0; j<8; j++)
    {
      if (vetor[i]<vetor[j])
      {
        aux = vetor[j];
        vetor[j] = vetor[i];
        vetor[i] = aux;
        printf("\n");
        for (h=0; h<8; h++)
        {
          printf("%d", vetor[h]);    
        }
      }
    }
    
  }
  // for (i=0; i<8; i++)
  // {
  //   printf("%d", vetor[i]);    
  // }
}