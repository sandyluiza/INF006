#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void validacao_data();
int main();
void soma_data();
void subtra_data();
void data_extenso();
void data_pascoa();

typedef struct
{
  int edia;
  int emes;
  int eano;
  int cont;
}
DataComp;

// Separando a data
DataComp separa_data(DataComp data)
{
  char dataNasc[12], sdia[3], smes[3], sano[12];
  int i, j, k, dia, mes, ano, cont_estru = 0;

  while (strlen(dataNasc)<10)
  {
    strcmp(sdia," ");
    strcmp(smes," ");
    strcmp(sano," ");
    dia = 0;
    mes = 0;
    ano = 0;
    
    printf("\nInforme a data ");
    fgets(dataNasc, 12, stdin);
    size_t lo = strlen(dataNasc) - 1;
    if (dataNasc[lo] == '\n')
    {
      dataNasc[lo] = '\0';
    }

    if (strlen(dataNasc)<10 && (strcmp(dataNasc,"9999")!=0))
    {
      printf("Digite a data no formato DD/MM/AAAA ");
    }
      
    else if (strlen(dataNasc)>7)
    {
      for(i=0; dataNasc[i] != '/' && i<2; i++)
      {
        sdia[i] = dataNasc[i];   
      }
      sdia[i] = '\0';
      dia = atoi(sdia); 
  
      for(j=0; dataNasc[j] != '/' && j<2; j++)
      {
        smes[j] = dataNasc[j+3]; 
      }
      smes[j] = '\0';
      mes = atoi(smes);
  
      for(k=0; k<8; k++)
      {
        sano[k] = dataNasc[k+6];
      }
      sano[k] = '\0';
      ano = atoi(sano);      
    }
    data.edia = dia;
    data.emes = mes;
    data.eano = ano;
    return data;
  }
}

// uma função que recebe como parâmetro o dia, o mês, o ano e uma estrutura do tipo Data, onde o resultado deve ser armazenado, e retorna verdadeiro se a data estiver válida; caso contrário, retorna falso. A validação da data pode ser feita da seguinte forma:
// ■ meses com 30 dias: 04, 06, 09 e 11;
// ■ meses com 31 dias: 01, 03, 05, 07, 08, 10,12;
// ■ cálculo de ano bissexto: cada ano divisível por 4 é um ano bissexto(E); cada ano divisível por 100 não é bissexto
// (OU); todo ano divisível por 400 sempre é um ano bissexto;
// ■ uma função que recebe como parâmetro uma data do tipo string (no formato DD/MM/AAAA) e uma estrutura do tipo Data, onde o resultado deve ser armazenado, e retorna verdadeiro se a data estiver válida; caso contrário, retorna falso;
void validacao_data(DataComp data)
{
  separa_data(data);
  printf("\n%d %d %d\n", data.edia, data.emes, data.eano);
  int biss = 0;
  data.cont = 0;
  // mes 30
  if (((data.emes == 4)||(data.emes == 6)||(data.emes == 9)||(data.emes == 11)) && ((data.edia > 0) && (data.edia < 31)))
  {
    data.cont = data.cont + 1;
  }
  // mes 31
  if (((data.emes == 1)||(data.emes == 3)||(data.emes == 5)||(data.emes == 7)||(data.emes == 8)||(data.emes == 10)||(data.emes == 12)) && ((data.edia > 0) && (data.edia < 32)))
  {
    data.cont = data.cont + 1;
  }
  // ano biss
  if (data.eano % 4 == 0)
  {
    biss = biss + 1;
  }
  else if ((data.eano % 4 == 0) && (data.eano % 100 == 0))
  {
    biss = 0;
  }
  else if ((data.eano % 4 == 0) && (data.eano % 100 == 0) && (data.eano % 400 == 0))
  {
    biss = biss + 1;
  }
  if ((biss>0) && (data.edia > 0) && (data.edia < 30) && (data.emes == 2))
  {
    data.cont = data.cont + 1;
  }
  else if ((biss == 0) && (data.edia > 0) && (data.edia < 29) && (data.emes == 2))
  {
    data.cont = data.cont + 1;
  }
  if (data.cont == 0)
  {
    printf("\nData inválida. Falso\n");
    return 0;
  }
  else
  {
    printf("\nData válida. Verdadeiro");
  }
}

// ■ uma função que recebe como parâmetro uma estrutura do tipo Data e um número inteiro, e retorna a soma do número de dias da data recebida;
void soma_data(DataComp data)
{
  int numerod, conta_dia, ano, dia, mes;
  printf("\nInforme o número inteiro de dias: ");
  scanf("%d", &numerod);

  conta_dia = numerod;
  dia = data.edia;
  mes = data.emes;
  ano = data.eano;
  
  while (conta_dia > 0)
  {
    if (conta_dia >= 365)
    {
      ano = ano + 1;
      conta_dia = conta_dia - 365;
    }
    else if (conta_dia < 365 && conta_dia > 31)
    {
      mes = mes + 1;
      conta_dia = conta_dia - 31;
    }   
    else if (conta_dia < 31)
    {
      dia = dia + 1;
      conta_dia = conta_dia - 1;
    }
  }
  while (dia > 31)
  {
    mes = mes + 1;
    dia = dia - 31;
  }
  while (mes > 12)
  {
    ano = ano + 1;
    mes = mes - 12;
  }
  printf("\n%d %d %d\n", dia, mes, ano);
}

// ■ uma função que recebe como parâmetro uma estrutura do tipo Data e um número inteiro, e retorna a subtração do número de dias da data recebida;
void subtra_data(DataComp data)
{
  return;
}

// ■ uma função que recebe como parâmetro uma data e escreve essa data por extenso. Por exemplo, 25/03/2007 deve ser escrito como 25 de março de 2007. A função deve retornar verdadeiro se a operação for realizada com sucesso e falso, caso contrário;
void data_extenso(DataComp data)
{
  if (data.emes == 1)
  {
    printf("\n%d de janeiro de %d\n", data.edia, data.eano);
  }
  if (data.emes == 2)
  {
    printf("\n%d de fevereiro de %d\n", data.edia, data.eano);
  }
  if (data.emes == 3)
  {
    printf("\n%d de março de %d\n", data.edia, data.eano);
  }
  if (data.emes == 4)
  {
    printf("\n%d de abril de %d\n", data.edia, data.eano);
  }
  if (data.emes == 5)
  {
    printf("\n%d de maio de %d\n", data.edia, data.eano);
  }
  if (data.emes == 6)
  {
    printf("\n%d de junho de %d\n", data.edia, data.eano);
  }
  if (data.emes == 7)
  {
    printf("\n%d de julho de %d\n", data.edia, data.eano);
  }
  if (data.emes == 8)
  {
    printf("\n%d de agosto de %d\n", data.edia, data.eano);
  }
  if (data.emes == 9)
  {
    printf("\n%d de setembro de %d\n", data.edia, data.eano);
  }
  if (data.emes == 10)
  {
    printf("\n%d de outubro de %d\n", data.edia, data.eano);
  }
  if (data.emes == 11)
  {
    printf("\n%d de novembro de %d\n", data.edia, data.eano);
  }
  if (data.emes == 12)
  {
    printf("\n%d de dezembro de %d\n", data.edia, data.eano);
  }
}

// ■ uma função que receba como parâmetro o ano e retorne a data da Páscoa. O domingo de Páscoa é o primeiro domingo depois da primeira lua cheia do outono. 
void data_pascoa(DataComp data)
{
  int a, b, c, d, e, g, h, j, k, m, r, n, p;
  
  a = data.eano % 19;
  b = data.eano / 100;
  c = data.eano % 100;
  d = b / 4;
  e = b % 4;
  g = ((8 * b) + 13) / 25;
  h = (19 * a + b - d - g + 15) / 30;
  j = c / 4;
  k = c % 4;
  m = (a + 11 * h) / 319;
  r = (2 * e + 2 * j - k - h + m + 32) % 7;
  n = (h - m + r + 90) / 25;
  p = (h - m + r + n + 19) % 32;

  printf("\n %d %d %d %d %d %d %d %d %d %d %d %d %d \n", a, b, c, d, e, g, h, j, k, m, r, n, p);
  return;
}

int main()
{
  DataComp data;
  // separa_data(data); 
  validacao_data(data);
  // soma_data(data);
  // subtra_data(data);
  // data_extenso(data);
  // data_pascoa(data);
}

