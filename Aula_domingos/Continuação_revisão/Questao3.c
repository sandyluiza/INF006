// Criar o codigo para solução das seguintes questões:
// 3) Que  entre com dados num vetor VET do tipo inteiro com 20 oisiçoes, onde podem existir varios elementos repetidos. Gere um vetor VET1 que tambem será ordenado e terá somente os elementos do vetor VET que não sao repetidos.
#include <stdio.h>
#define num 20
int main()
{
  int vet[num], i, j, k, aux, vet_1[num], repetido, vet_novo[num], cont = 0;

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
      }
    } 
  }

  // retirando o que está repetido
  for (i=0; i<num; i++)
  {
    if (vet[i] == vet[i+1])
    {
      // vet_1[f] = vet[f];
      repetido = vet[i];
    }
    if (vet[i] != repetido)
    {
      vet_novo[cont] = vet[i];
      cont++;
    }
  }

  // Imprimindo o vetor
  for (i=0; i<cont; i++)
  {
    printf("%d", vet_novo[i]);    
  }
  
}
