#include <stdio.h>
#include <string.h>
// Questão 1: Na usina de Angra dos Reis, os técnicos analisam a perda de massa de um material radioativo. Sabendo-se que este perde 25% de sua massa a cada 30 segundos, criar um programa que imprima o tempo necessário para que a massa deste material se torne menor que 0,10 gramas. O programa pode calcular o tempo para varias massas.
int main()
{
  int contador = 0;
  float massa;
  printf("Digite a massa: ");
  scanf("%f",&massa);
  while(massa=>0.10)
  {
    massa *= 0.75;
    contador++;
  }
  contador *= 30;
  printf("Demorou %d segundos.", contador);
}

// Questao 2
// Entrar com a idade de varias pessoas ate o usuário informar que deseja
// parar. e imprimir o total de pessoas com menos de 21 e total de pessoas
// maiores que 50
/*#define TAM 50
int main()
{
  int idade[TAM], i=0, parar = 0, menores=0, maiores=0;
  while(parar != 1){
    printf("Informe a idade(Digite 0 para parar): ");
    scanf("%d", &idade[i]);
    if(idade[i] == 0)
      parar = 1;
    else if(idade[i]<21)
      menores++;
    else if(idade[i]>50)
      maiores++;
    i++;
  }
  printf("Maiores de 50 anos: %d\nMenores de 21 anos: %d\n", maiores, menores); 
}*/
// Dado um pais A, com 5.000.0000 de habitantes e uma taxa de natalidade de
// 3% ao ano, e um pais B com 7.000.00 de habitantes e uma taxa de
// natalidade de 2% ao ano. calcular e imprimir o tempo necessário para que
// a população do pais A ultrapasse a população do pais B
// Questão 3
// int main(){
//   long int A = 50000000, B = 700000;
//   int anos=0;
//   while(A>B){
//     A*=1.02;
//     B*=1.03;
//     anos++;
//   }
//   printf("B levou %d anos para ultrapassar A", anos);
// }
// Chico tem 1.50m e cresce 2 centímetros por ano, enquanto Juca tem 1.10m e
// cresce 3 cm por ano. construir um programa que calcule e imprima
// quantos anos serão necessários para Juca seja maior que Chico;
//Questão 4
// int main(){
//   double Chico = 1.5, Juca = 1.1;
//   int anos=0;
//   while(Chico>Juca)
//     {
//       Chico+= 0.02;
//       Juca+= 0.03;
//       anos++;
//     }
//   printf("Juca levou %d anos para ultrapassar Chico", anos);
// }
//Questão 5
// Criar um programa que deixe entrar com nome e idade de 20 pessoas e
// armazene em um vetor todos os nomes que comecem com a letara no
// intervalo L-S

// int main(){
//   char nomes[20][20], temp[20];
//   int idade, i;
//   for(i=0;i<20;i++){
//     printf("Digite o nome e idade: ");
//     fflush(stdin);
//     fgets(temp, 20, stdin);
//     for(int j=0; j<20; j++)
//         if(temp[i] == 10)
//             temp[i] = 0;
//     scanf("%d", &idade);
//     getchar();
//     if(temp[0] >= 76 && temp[0] <=83){
//       strcpy(nomes[i], temp);
//       printf("A inicial do nome %s está entre L e S", nomes[i]);
//     }
//     i++;
//   }
// }
// Questão 6
// 6. Armazenar nomes e nota 1, 2, de 15 alunos. calcular e armazenar a media.
// armazenar tambem a situação do aluno: AP ou RP. imprimir uma listagem
// contendo nome, notas, media e a situação de cada aluno.
// typedef struct{
//   char nome[20];
//   double nota1;
//   double nota2;
//   char situaçao [3];
// }Aluno;
// int main(){
//   Aluno alunos[3];
//   double media;
//   for(int i = 0; i<3; i++){
//     printf("Digite o Nome: ");
//     gets(alunos[i].nome);
//     printf("Digite a primeira nota: ");
//     scanf("%lf", &alunos[i].nota1);
//     printf("Digite a segunda nota: ");
//     scanf("%lf", &alunos[i].nota2);
//     getchar();
//     printf("Digite a situação: ");
//     gets(alunos[i].situaçao);
//     media = (alunos[i].nota1+alunos[i].nota2)/2;
//   }
//   for(int i = 0; i<3; i++)
//     printf("Nome do aluno: %s\nPrimeira Nota: %.2lf\n"
//       "Segunda Nota: %.2lf\n"
//       "Média: %.2lf\nSituação: %s\n"
//       ,alunos[i].nome, alunos[i].nota1
//       , alunos[i].nota2, media,alunos[i].situaçao );
// }