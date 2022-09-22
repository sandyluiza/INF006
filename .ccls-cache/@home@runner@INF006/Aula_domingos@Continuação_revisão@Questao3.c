// Criar o codigo para solução das seguintes questões:
// 3) Que  entre com dados num vetor VET do tipo inteiro com 20 oisiçoes, onde podem existir varios elementos repetidos. Gere um vetor VET1 que tambem será ordenado e terá somente os elementos do vetor VET que não sao repetidos.
#include <stdio.h>
#define num 5
int main()
{
  int vet[num], i, j, k, h, aux, vet_1[num], m, f;

  // lendo o vetor
  printf("Informe os elementos do vetor.\n");
  for (i=0; i<num; i++)
  {
    scanf("%d", &vet[i]);
  }

  // ordenando o vetor
  for (j=0; j<num; j++)
  {
    for (k=0; k<num; k++)
    {
      if (vet[j]<vet[k])
      {
        aux = vet[k];
        vet[k] = vet[j];
        vet[j] = aux;
        // printf("\n");
        
      }
    } 
  }
  for (h=0; h<num; h++)
  {
    printf("%d", vet[h]);    
  }
  
  printf("\n");

  // retirando o que está repetido
  // for (f=0; f<num; f++)
  // {
  //   if (vet[f] == vet[f+1])
  //   {
  //     vet_1[f] = vet[f];
  //   }
  // }
  
  // // printf("\n");
  
  // for (m=0; m<num; m++)
  // {
  //   printf("%d", vet_1[m]);    
  // }
}
TERMINAR