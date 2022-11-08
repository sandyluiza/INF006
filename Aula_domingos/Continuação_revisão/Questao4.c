// Criar o codigo para solução das seguintes questões:
// 4) Que armazene 10 numeros em um vetor. Na entrada de dados, o numero ja deve ser armazenado na sua posição definitiva em ordem decrescente. imprimir o vetor logo apos a entrada de dados;
#include <stdio.h>
#define num 10
int main()
{
  // Variáves
  int i=0, aux, aux_1=0, j, vet[num], cont=0, cont_1, aux_2, aux_3, aux_4, aux_5, aux_6, aux_7, aux_8, aux_9;
  
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
        if (j<=num-1)
        {
          aux_1 = vet[j];
          vet[j] = aux;
          aux_2 = vet[j+1];
          vet[j+1] = aux_1;
          aux_3 = vet[j+2];
          vet[j+2] = aux_2;
          aux_4 = vet[j+3];
          vet[j+3] = aux_3;
          aux_5 = vet[j+4];
          vet[j+4] = aux_4;
          aux_6 = vet[j+5];
          vet[j+5] = aux_5;
          aux_7 = vet[j+6];
          vet[j+6] = aux_6;
          aux_8 = vet[j+7];
          vet[j+7] = aux_7;
          aux_9 = vet[j+8];
          vet[j+8] = aux_8;
          vet[j+9] = aux_9;
          break;
        }
        else if (j > num-1)
        {
          vet[j] = aux;
          break;
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
