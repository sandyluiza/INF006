// Criar o codigo para solução das seguintes questões:
// 2) Que dado dois vetores de 10 posições, efetue operações basicas aritmeticas, indicadas por um terceiro vetor cujos dados tambem são fornecidos pelo usuario, gerando e imprimindo um quarto vetor.
#include <stdio.h>
#include <string.h>
#define num 10
int main()
{
  // Variaveis
  int i, j, l, vetor_1[num], vetor_2[num], vetor_4[num][num], tam_vet_ope;
  char vetor_3[num+1];

  // Leitura
  printf("Informe o primeiro vetor.\n");
  for (i=0; i<num; i++)
  {
    scanf("%d", &vetor_1[i]);
  }
  
  printf("Informe o segundo vetor.\n");
  for (i=0; i<num; i++)
  {
    scanf("%d", &vetor_2[i]);
  }

  printf("Informe as operações sem espaço.\n");
  getchar();
  fgets(vetor_3, num, stdin);
  tam_vet_ope = strlen(vetor_3)-1;

  // Fazendo as operações
  for (i=0; i<tam_vet_ope; i++)
  {
    if (vetor_3[i] == '+')
    {
      for (l=0; l<num; l++)
      {
        vetor_4[i][l] = vetor_1[l]+vetor_2[l];
      }
    }
    else if (vetor_3[i] == '-')
    {
      for (l=0; l<num; l++)
      {
        vetor_4[i][l] = vetor_1[l]-vetor_2[l];
      }
    }
    else if (vetor_3[i] == '*')
    {
      for (l=0; l<num; l++)
      {
        vetor_4[i][l] = vetor_1[l]*vetor_2[l];
      }
    }
    else if (vetor_3[i] == '/')
    {
      for (l=0; l<num; l++)
      {
        vetor_4[i][l] = vetor_1[l]/vetor_2[l];
      }
    }
  }

  // Imprimindo vetor 4
  printf("\nVetor 4 é:\n");
  for (i=0; i<tam_vet_ope; i++)
  {
    for (j=0; j<num; j++)
    {
      printf("%d ", vetor_4[i][j]); 
    }
    printf("\n");
  }
}
