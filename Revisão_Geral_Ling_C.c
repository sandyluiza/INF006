#include <stdio.h>
#include <string.h>
// Questão 1: Na usina de Angra dos Reis, os técnicos analisam a perda de massa de um material radioativo. Sabendo-se que este perde 25% de sua massa a cada 30 segundos, criar um programa que imprima o tempo necessário para que a massa deste material se torne menor que 0,10 gramas. O programa pode calcular o tempo para varias massas.
// int main()
// {
//   int contador = 0;
//   float massa;
//   printf("Digite a massa: ");
//   scanf("%f", &massa);
//   while(massa>=0.10)
//   {
//     massa *= 0.75;
//     contador++;
//   }
//   contador *= 30;
//   printf("Demorou %d segundos.", contador);
// }

// Questão 2: Entrar com a idade de varias pessoas ate o usuário informar que deseja parar. e imprimir o total de pessoas com menos de 21 e total de pessoas maiores que 50
// #define TAM 50
// int main()
// {
//   int idade[TAM], i=0, parar = 0, menores=0, maiores=0;
//   while(parar != 1){
//     printf("Informe a idade(Digite 0 para parar): ");
//     scanf("%d", &idade[i]);
//     if(idade[i] == 0)
//       parar = 1;
//     else if(idade[i]<21)
//       menores++;
//     else if(idade[i]>50)
//       maiores++;
//     i++;
//   }
//   printf("Maiores de 50 anos: %d\nMenores de 21 anos: %d\n", maiores, menores); 
// }
// OUTRA FORMA DE FAZER:
// int main()
// {
//   int idade = 1, menores=0, maiores=0;
//   while(idade != 0)
//   {
//     printf("Informe a idade(Digite 0 para parar): ");
//     scanf("%d", &idade);
//     if (idade == 0)
//       break;
//     if(idade<21)
//       menores++;
//     else if(idade>50)
//       maiores++;
//   }
//   printf("O total de pessoas maiores de 50 anos é %d.\nO total de pessoas menores de 21 anos é %d.\n", maiores, menores); 
// }

// Questão 3: Dado um pais A, com 5.000.000 de habitantes e uma taxa de natalidade de 2% ao ano, e um pais B com 700.000 de habitantes e uma taxa de natalidade de 3% ao ano. calcular e imprimir o tempo necessário para que a população do pais B ultrapasse a população do pais A
// int main()
// {
//   long int A = 5000000, B = 700000;
//   int anos=0;
//   while(A>B)
//   {
//     A*=1.02;
//     B*=1.03;
//     anos++;
//   }
//   printf("A população B levou %d anos para ultrapassar a A", anos);
// }

// Questão 4: Chico tem 1.50m e cresce 2 centímetros por ano, enquanto Juca tem 1.10m e cresce 3 cm por ano. construir um programa que calcule e imprima quantos anos serão necessários para Juca seja maior que Chico;
// int main()
// {
//   float Chico = 1.5, Juca = 1.1;
//   int anos=0;
//   while(Chico>=Juca)
//   {
//     Chico += 0.02;
//     Juca += 0.03;
//     anos++;
//     // printf("Chico %f Juca %f\n", Chico, Juca);
//   }
//   printf("Juca levou %d anos para ultrapassar Chico", anos);
// }

// Questão 5: Criar um programa que deixe entrar com nome e idade de 20 pessoas e armazene em um vetor todos os nomes que comecem com a letra no intervalo L-S
// int main()
// {
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
// OUTRA FORMA DE FAZER:
// int main()
// {
//   char nomes[20][20], nome[20], j;
//   int idade[20], i;
//   for(i=0;i<20;i++)
//   {
//     printf("Digite o nome: ");
//     fgets(nome, 20, stdin);
//     printf("Digite a idade: ");
//     scanf("%d", &idade[i]);
//     getchar();
//     j = nome[0];
//     if(j >= 'L' && j <= 'S')
//     {
//       strcpy(nomes[i], nome);
//     }
//   }
//   for(i=0;i<20;i++)
//   {
//     printf("%s", nomes[i]);
//   }
// }

// Questão 6: Armazenar nomes e nota 1, 2, de 15 alunos. calcular e armazenar a media. armazenar tambem a situação do aluno: AP ou RP. imprimir uma listagem contendo nome, notas, media e a situação de cada aluno.
// typedef struct{
//   char nome[20];
//   double nota1;
//   double nota2;
//   char situaçao [3];
// }Aluno;
// int main(){
//   Aluno alunos[15];
//   double media;
//   for(int i = 0; i<15; i++){
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
//   for(int i = 0; i<15; i++)
//     printf("Nome do aluno: %s\nPrimeira Nota: %.2lf\n"
//       "Segunda Nota: %.2lf\n"
//       "Média: %.2lf\nSituação: %s\n"
//       ,alunos[i].nome, alunos[i].nota1
//       , alunos[i].nota2, media,alunos[i].situaçao );
// }
// OUTRA FORMA DE FAZER:
// typedef struct
// {
//   char nome[20];
//   float nota1;
//   float nota2;
//   char situacao [3];
//   float media;
// }
// Alunos;
// int main()
// {
//   Alunos aluno[15];
//   for(int i = 0; i<15; i++){
//     printf("\nDigite o Nome: ");
//     fgets(aluno[i].nome, 20, stdin);
//     printf("Digite a primeira nota: ");
//     scanf("%f", &aluno[i].nota1);
//     printf("Digite a segunda nota: ");
//     scanf("%f", &aluno[i].nota2);
//     getchar();
//     printf("Digite a situação: ");
//     fgets(aluno[i].situacao, 3, stdin);
//     getchar();
//     aluno[i].media = (aluno[i].nota1+aluno[i].nota2)/2;
//   }
//   for(int i = 0; i<15; i++)
//   {  
//     printf("\nNome do aluno: %sPrimeira Nota: %f\n"
//       "Segunda Nota: %f\n"
//       "Média: %f\nSituação: %s\n"
//       ,aluno[i].nome, aluno[i].nota1
//       , aluno[i].nota2, aluno[i].media,aluno[i].situacao);
//   }
// }

// Questão 7: Criar programa que leia dois conjuntos de números inteiros, tendo cada um 10 e 20 elementos e apresente os elementos comuns aos conjuntos. lembre-se de que os elementos podem se repetir mas não podem aparecer repetidos na saída
// void conjuntos_elementos()
// {
//   int conj_1[5], conj_2[10], i, j=1, k=1, l=0, m=0, taman=0, inter_1[5], taman_1=0, inter[5];
//   // lendo as entradas
//   for (i=0; i<5; i++)
//   {
//     printf("Informe o %d elemento do conjunto de 10 ", j);
//     scanf("%d", &conj_1[i]);
//     j++;
//   }
//   for (i=0; i<10; i++)
//   {
//     printf("Informe o %d elemento do conjunto de 20 ", k);
//     scanf("%d", &conj_2[i]);
//     k++;
//   }
//   // identificando o que aparece nos dois vetores
//   for (i=0; i<5; i++)
//   {
//     for (j=0; j<10; j++)
//     {
//       if (conj_1[i] == conj_2[j])
//       {
//         inter[taman] = conj_1[i];
//         taman++;
//         break;
//       }
//     }  
//   }
//   // tirando os itens repetidos
//   #####################################
//   for (m=0; m<5; m++)
//   {
//     for (l=0; l<10; l++)
//     {
//       inter_1[taman_1] = conj_1[m];
//       if (inter_1[taman_1] == conj_1[l])
//       {
//         inter_1[taman_1] = ;
//         taman_1++;
//         printf("%d",conj_1[m]);
//         break;
//       }
//     }  
//   }
//   ##########################################
//   // imprimir o resultado
//   for (i=0; i<taman_1;i++)
//   {
//     printf("Itens que se repetem: %d\n", inter_1[i]);
//   }
// }
// // Chamando o void
// int main()
// {
//   conjuntos_elementos();
// }

// Questão 8: Criar programa que leia dados de 20 elementos inteiros. imprimir o maior e o menor, sem ordenar, o percentual de números pares e a media dos elementos do vetor.
int main()
{
  int element[5], i, maior=-9000000000, menor=9000000000000, resto_div;
  float num_par;
  double perc_num_par;
  for (i=0; i<5; i++)
  {
    printf("Informe o numero ");
    scanf("%d", &element[i]);
    // maior e menor
    if (element[i] > maior)
    {
      maior = element[i];
    }
    
    else if (element[i] < menor)
    {
      menor = element[i];
    }
    // pares
    resto_div = element[i]%2;
    if (resto_div == 0)
    {
      num_par++;
    }
  }
  perc_num_par = (num_par/5)*100;
  printf("maior: %d\nmenor: %d\n", maior, menor);
  printf("percentual numeros pares: %lf", perc_num_par);
}