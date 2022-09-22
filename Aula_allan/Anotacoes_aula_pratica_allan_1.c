#include <stdio.h>
int main()
{
  int vetor[15], i, metade, j, tam=15, inicio=0;
  for(j=0;j<15;j++)
  {
    printf("Informe o item do vetor");
    scanf("%d", &vetor[j]);
  }
  for (i=inicio;i<tam;i++)
  {
    metade = tam/2;
    if (vetor[metade] == 16)
    {
      printf("metade= %d", vetor[metade]);
      break;
    }
    else if (vetor[metade] > 19)
    {
      tam = metade;
      i = tam;
      
    }
    else
    {
      inicio = metade;
    }
  }
}