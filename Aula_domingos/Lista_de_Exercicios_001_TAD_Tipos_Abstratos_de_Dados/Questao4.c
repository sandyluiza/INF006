#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void inserir_pessoa();
void consultar_pessoas();
void excluir_pessoa();
void cadastro();
void renda_acima_media();
void nasc_80_doismil();
int main();

typedef struct
{
  int numero_p;
  char nome[100];
  int ano_nasc;
  float renda_m;
}
Pessoa;

int main()
{
  Pessoa pessoa[1];
  int qtdPessoa = 0;
  cadastro(pessoa, qtdPessoa);
  return 0;
}

void cadastro(Pessoa pessoa[], int qtdPessoa)
{
  int opcao;

  printf("\nDigite a opção que deseja realizar:\n");
  printf("1 - Inserir cliente\n2 - Consultar clientes cadastrados\n3 - Excluir cliente\n4 - Clientes com renda acima da média\n5 - Clientes que nasceram entre os anos de 1980 e 2000\n6 - Sair\n");
  scanf("%d", &opcao);

  if (opcao == 1)
  {
    inserir_pessoa(pessoa, qtdPessoa);
  }
  else if(opcao == 2)
  {
    consultar_pessoas(pessoa, qtdPessoa);
  }
  else if (opcao == 3)
  {
    excluir_pessoa(pessoa, qtdPessoa);
  }
  else if (opcao == 4)
  {
    renda_acima_media(pessoa, qtdPessoa);
  }
  else if (opcao == 5)
  {
    nasc_80_doismil(pessoa, qtdPessoa);
  }
  else if (opcao == 6)
  {
    return;
  }
  else
  {
    printf("\nOpção inválida.\n");
    cadastro(pessoa, qtdPessoa);
  }
}

void inserir_pessoa(Pessoa pessoa[], int qtdPessoa)
{
  getchar();
  printf("\n");
  pessoa[qtdPessoa].numero_p = qtdPessoa + 1;
  printf("Informe o nome do cliente ");
  fgets(pessoa[qtdPessoa].nome, 100, stdin);
  size_t l1 = strlen(pessoa[qtdPessoa].nome) - 1;
  if (pessoa[qtdPessoa].nome[l1] == '\n')
  {
    pessoa[qtdPessoa].nome[l1] = '\0';
  }
  printf("Informe o ano de nascimento do cliente ");
  scanf("%d", &pessoa[qtdPessoa].ano_nasc);
  
  printf("Informe a renda mensal do cliente ");
  scanf("%f", &pessoa[qtdPessoa].renda_m);
  
  qtdPessoa = qtdPessoa + 1;
  
  cadastro(pessoa, qtdPessoa);
}

void consultar_pessoas(Pessoa pessoa[], int qtdPessoa)
{
  if (qtdPessoa == 0)
  {
    printf("\nNenhum cliente foi cadastrado.\n");
  }
  else
  {
    printf("\nLISTA DE CLIENTES CADASTRADOS: \n");
    for(int i=0; i<qtdPessoa; i++)
    {
      printf("\nNúmero: %d\nNome: %s\nAno de nascimento: %d\nRenda Mensal: %.2f\n", pessoa[i].numero_p, pessoa[i].nome, pessoa[i].ano_nasc, pessoa[i].renda_m);
    }
  }
  cadastro(pessoa, qtdPessoa);
}

void excluir_pessoa(Pessoa pessoa[], int qtdPessoa)
{
  int numero, cont = 0;
  if (qtdPessoa == 0)
  {
    printf("\nNenhum cliente foi cadastrado.\n");
  }
  else
  {
    printf("\nDigite o número do cliente a ser excluido: ");
    scanf("%d", &numero);
    for (int i = 0; i < qtdPessoa; i++) 
    {
      if (numero == pessoa[i].numero_p) 
      {
        for (int j = i; j < qtdPessoa - 1; j++) 
        { 
          pessoa[j] = pessoa[j + 1];
        }
        qtdPessoa = qtdPessoa - 1;
        printf("\nCliente excluído com sucesso.\n");
        break;
      }
      else
      {
        cont = cont + 1;
      }
    }
    if (cont != 0)
    {
      printf("\nCliente não encontrado.\n");
    }
  }
  cadastro(pessoa, qtdPessoa);
}

void renda_acima_media(Pessoa pessoa[], int qtdPessoa)
{
  int cont = 0;
  float soma = 0, media;
  if (qtdPessoa == 0)
  {
    printf("\nNenhum cliente foi cadastrado.\n");
  }
  else
  {
    for(int i=0; i<qtdPessoa; i++)
    {
      soma = soma + pessoa[i].renda_m;
    }
    media = soma / qtdPessoa;

    printf("\nLISTA DE CLIENTES COM RENDA ACIMA DA MÉDIA: \n");
    for(int i=0; i<qtdPessoa; i++)
    {
      if (pessoa[i].renda_m > media)
      {
        printf("\nNúmero: %d\nNome: %s\nAno de nascimento: %d\nRenda Mensal: %.2f\n", pessoa[i].numero_p, pessoa[i].nome, pessoa[i].ano_nasc, pessoa[i].renda_m);
        cont = cont + 1;
      }
    }
    if (cont == 0)
    {
      printf("0\n");
    }
    printf("\nTotal: %d clientes\n", cont);
  }
  cadastro(pessoa, qtdPessoa);
}

void nasc_80_doismil(Pessoa pessoa[], int qtdPessoa)
{
  int cont = 0;
  if (qtdPessoa == 0)
  {
    printf("\nNenhum cliente foi cadastrado.\n");
  }
  else
  {
    printf("\nLISTA DE CLIENTES QUE NASCERAM ENTRE 1980 E 2000: \n");
    for(int i=0; i<qtdPessoa; i++)
    {
      if ((pessoa[i].ano_nasc > 1979) && (pessoa[i].ano_nasc < 2001))
      {
        printf("\nNúmero: %d\nNome: %s\nAno de nascimento: %d\nRenda Mensal: %.2f\n", pessoa[i].numero_p, pessoa[i].nome, pessoa[i].ano_nasc, pessoa[i].renda_m);
        cont = cont + 1;
      }
    }
    if (cont == 0)
    {
      printf("0\n");
    }
    printf("\nTotal: %d clientes\n", cont);
  }
  cadastro(pessoa, qtdPessoa);
}