#include <stdio.h>
#include <string.h>
#include <math.h>
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
//   int conj_1[10], conj_2[20], i, j=1, k=1, l=0, m=0, taman=0, inter_1[10], taman_1=0, inter[10];
//   // lendo as entradas
//   for (i=0; i<10; i++)
//   {
//     printf("Informe o %d elemento do conjunto de 10 ", j);
//     scanf("%d", &conj_1[i]);
//     j++;
//   }
//   for (i=0; i<20; i++)
//   {
//     printf("Informe o %d elemento do conjunto de 20 ", k);
//     scanf("%d", &conj_2[i]);
//     k++;
//   }
//   // identificando o que aparece nos dois vetores
//   for (i=0; i<10; i++)
//   {
//     for (j=0; j<20; j++)
//     {
//       if (conj_1[i] == conj_2[j])
//       {
//         inter[taman] = conj_1[i];
//         taman++;
//         break;
//       }
//     }  
//   }
//   // imprimir o resultado
//   for (i=0; i<taman;i++)
//   {
//     if (inter[i] != inter[i+1])
//     {
//     printf("Itens que se repetem: %d\n", inter[i]);
//     }
//   }
// }
// // Chamando o void
// int main()
// {
//   conjuntos_elementos();
// }

// Questão 8: Criar programa que leia dados de 20 elementos inteiros. imprimir o maior e o menor, sem ordenar, o percentual de números pares e a media dos elementos do vetor.
// int main()
// {
//   int element[5], i, maior=-900000, menor=90000000, resto_div, soma=0;
//   double num_par, perc_num_par, media;
//   for (i=0; i<5; i++)
//   {
//     printf("Informe o numero ");
//     scanf("%d", &element[i]);
//     // maior e menor
//     if (element[i] > maior)
//     {
//       maior = element[i];
//     }
    
//     else if (element[i] < menor)
//     {
//       menor = element[i];
//     }
//     // pares
//     resto_div = element[i]%2;
//     if (resto_div == 0)
//     {
//       num_par++;
//     }
//     // media
//     soma = soma + element[i];
//     media = soma/5;
//   }
//   perc_num_par = ((num_par/5.00)*100.00);
//   printf("maior: %d\nmenor: %d\n", maior, menor);
//   printf("percentual numeros pares: %.2lf\n", perc_num_par);
//   printf("a media dos elementos do vetor e %.2lf", media);
// }

// Questão 9: Criar programa que leia elementos de uma matriz inteira de 10x10 e escreva os elementos da diagonal principal
// int main()
// {
//   #define tam 10
//   int matriz[tam][tam], i, j, l, m, t=0, u=0, v=0, w=0;
//   for (i=0;i<tam;i++)
//   {
//     for(j=0;j<tam;j++)
//     {
//       t = i+1;
//       u = j+1;
//       printf("Informe o elemento da matriz[%d][%d] ",t,u);
//       scanf("%d", &matriz[i][j]);
//     }
//   }
//   for (l=0;l<tam;l++)
//   {
//     for(m=0;m<tam;m++)
//     {
//       if (l==m)
//       {
//         v=l+1;
//         w=m+1;
//         printf("Os elementos da diagonal da matriz são:");
//         printf("Elemento[%d][%d]: %d\n", v, w, matriz[l][m]);
//       }  
//     }
//   }
// }

// Questão 10: Criar programa que leia e armazena os elementos de uma matriz M inteira 10x10 e imprima todos os elementos que estão em linhas pares e colunas impares.
// int main()
// {
//   #define tam 10
//   int matriz[tam][tam], i, j, l, m, t=0, u=0, v=0, w=0;
//   for (i=0;i<tam;i++)
//   {
//     for(j=0;j<tam;j++)
//     {
//       t = i+1;
//       u = j+1;
//       printf("Informe o elemento da matriz[%d][%d] ",t,u);
//       scanf("%d", &matriz[i][j]);
//     }
//   }
//   for (l=1;l<tam;l=l+2)
//   {
//     for(m=0;m<tam;m=m+2)
//     {
//       v=l+1;
//       w=m+1;
//       printf("Os elementos da linha par e coluna impar sao:");
//       printf("Elemento[%d][%d]: %d\n", v, w, matriz[l][m]);
        
//     }
//   }
// }

// Questão 11: Criar e armazenar ua matriz a 10x10 e gerar e imprimir a matriz invertida
// int main()
// {
//   #define tam 10
//   int matriz[tam][tam], matriz_1[tam][tam], i, j, l, m, t=0, u=0, v=0, w=0;
//   for (i=0;i<tam;i++)
//   {
//     for(j=0;j<tam;j++)
//     {
//       t = i+1;
//       u = j+1;
//       printf("Informe o elemento da matriz[%d][%d] ",t,u);
//       scanf("%d", &matriz[i][j]);
//     }
//   }
//   for (l=0;l<tam;l++)
//   {
//     for(m=0;m<tam;m++)
//     {
//       matriz_1[l][m] = matriz[m][l];
//       v=l+1;
//       w=m+1;
//       printf("Os elementos da matriz invetida são: ");
//       printf("Elemento[%d][%d]: %d\n", v, w, matriz_1[l][m]);
//     }
//   }
// }