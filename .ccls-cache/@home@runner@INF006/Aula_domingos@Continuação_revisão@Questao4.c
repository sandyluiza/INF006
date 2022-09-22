// Criar o codigo para solução das seguintes questões:
// 4) Que armazene 10 numeros em um vetor. Na entrada de dados, o numero ja deve ser armazenado na sua posição definitiva em ordem decrescente. imprimir o vetor logo apos a entrada de dados;
#include <stdio.h>
#define num 5
int main()
{
  int vet[num], i;
  
  // lendo o vetor
  printf("Informe os elementos do vetor.\n");
  for (i=0; i<num; i++)
  {
    scanf("%d", &vet[i]);
  }
  TERMINAR
}
