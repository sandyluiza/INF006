// Criar o codigo para solução das seguintes questões:
// 4) Que armazene 10 numeros em um vetor. Na entrada de dados, o numero ja deve ser armazenado na sua posição definitiva em ordem decrescente. imprimir o vetor logo apos a entrada de dados;
#include <stdio.h>
#define num 10
int main()
{
  // Variáves
  int i=0, aux, aux_1=0, j, vet[num], cont=0, cont_1;
  
  // lendo o vetor
  while (i<num)
  {
    printf("\nInforme o elemento do vetor.\n");
    scanf("%d", &aux);

  // Determinando a posição
    for (j=0; j<num; j++)
    {
      if (aux>vet[j])
      {
        cont_1=j+1;
        if (cont_1<=num-1)
        {
          aux_1 = vet[j];
          vet[j] = aux;
          vet[cont_1] = aux_1;
          break;
        }
        else if (cont_1 > num-1)
        {
          vet[j] = aux;
        }
      }
    }
    cont = cont + 1;
    i++;
    
  // Impressão do vertor
    printf("\nVetor final:\n");
  
    for (j=0; j<cont; j++)
    {
      printf("%d ", vet[j]);
    }
    printf("\n");
  }  
}
