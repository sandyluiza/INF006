// Criar o codigo para solução das seguintes questões:
// 2) Que dado dois vetores de 10 posições, efetue operações basicas aritmeticas, indicadas por um terceiro vetor cujos dados tambem são fornecidos pelo usuario, gerando e imprimindo um quarto vetor.
#include <stdio.h>
#define num 3
int main()
{
  // Variaveis
  int i, vetor_1[num], vetor_2[num];
  char vetor_3[num];

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

  printf("Informe as operações que deseja realizar.\n");
  for (i=0; i<num; i++)
  {
    scanf("%c", &vetor_3[i]);
  }

  // for (i=0; i<3; i++)
  // {
  //   printf("%c", vetor_3[i]);
  // }
  printf("%c", vetor_3[2]);
  getchar();
}
TERMINAR