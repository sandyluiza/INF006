#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void inserir_pessoa();
void consultar_pessoas();
void excluir_pessoa();
void cadastro();
int main();

typedef struct
{
  char nome[100];
  char endereco[100];
  char telefone[50];
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
  printf("1 - Inserir carro\n2 - Consultar carro\n3 - Excluir carro\n4 - Sair\n");
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
  printf("Informe a placa ");
  fgets(pessoa[qtdPessoa].nome, 100, stdin);
  size_t l1 = strlen(pessoa[qtdPessoa].nome) - 1;
  if (pessoa[qtdPessoa].nome[l1] == '\n')
  {
    pessoa[qtdPessoa].nome[l1] = '\0';
  }
  printf("Informe a marca/modelo ");
  fgets(pessoa[qtdPessoa].endereco, 100, stdin);
  size_t l2 = strlen(pessoa[qtdPessoa].endereco) - 1;
  if (pessoa[qtdPessoa].endereco[l2] == '\n')
  {
    pessoa[qtdPessoa].endereco[l2] = '\0';
  }
  printf("Informe a cor ");
  fgets(pessoa[qtdPessoa].telefone, 50, stdin);
  size_t l3 = strlen(pessoa[qtdPessoa].telefone) - 1;
  if (pessoa[qtdPessoa].telefone[l3] == '\n')
  {
    pessoa[qtdPessoa].telefone[l3] = '\0';
  }
  qtdPessoa = qtdPessoa + 1;
  
  cadastro(pessoa, qtdPessoa);
}

void consultar_pessoas(Pessoa pessoa[], int qtdPessoa)
{
  if (qtdPessoa == 0)
  {
    printf("\nNenhum carro foi cadastrado.\n");
  }
  else
  {
    printf("\nLISTA DE CARROS CADASTRADOS: \n");
    for(int i=0; i<qtdPessoa; i++)
    {
      printf("\nPlaca: %s\nMarca/Modelo: %s\nCor: %s\n", pessoa[i].nome, pessoa[i].endereco, pessoa[i].telefone);
    }
  }
  cadastro(pessoa, qtdPessoa);
}

void excluir_pessoa(Pessoa pessoa[], int qtdPessoa)
{
  int cont = 0;
  char placa[100];
  if (qtdPessoa == 0)
  {
    printf("\nNenhum carro foi cadastrado.\n");
  }
  else
  {
    getchar();
    printf("\nDigite a placa do carro a ser excluido: ");
    fgets(placa, 100, stdin);
    size_t l11 = strlen(placa) - 1;
    if (placa[l11] == '\n')
    {
      placa[l11] = '\0';
    }

    for (int i = 0; i < qtdPessoa; i++) 
    {
      if (strcmp(placa, pessoa[i].nome) == 0) 
      {
        for (int j = i; j < qtdPessoa - 1; j++) 
        { 
          pessoa[j] = pessoa[j + 1];
        }
        qtdPessoa = qtdPessoa - 1;
        printf("\nCarro excluído com sucesso.\n");
        break;
      }
      else
      {
        cont = cont + 1;
      }
    }
    if (cont != 0)
    {
      printf("\nCarro não encontrado.\n");
    }
  }
  cadastro(pessoa, qtdPessoa);
}
