typedef struct
{
  int edia;
  int emes;
  int eano;
  int cont;
}
DataComp;

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
DataComp validacao_data();
int main();
void soma_data();
void subtra_data();
void data_extenso();
void data_pascoa();
void puxar_valores();
DataComp separa_data();

// Separando a data
DataComp separa_data(DataComp data)
{
  char dataNasc[12], sdia[3], smes[3], sano[12];
  int i, j, k, dia, mes, ano, cont_estru = 0;

  while ((strlen(dataNasc)<10)&& (strcmp(dataNasc,"9999")!=0))
  {
    strcmp(sdia," ");
    strcmp(smes," ");
    strcmp(sano," ");
    dia = 0;
    mes = 0;
    ano = 0;
    
    printf("\nDigite a data no formato DD/MM/AAAA ou digite 9999 para sair ");
    fgets(dataNasc, 12, stdin);
    size_t lo = strlen(dataNasc) - 1;
    if (dataNasc[lo] == '\n')
    {
      dataNasc[lo] = '\0';
    }

    if (strlen(dataNasc)<10 && (strcmp(dataNasc,"9999")!=0))
    {
      printf("Digite a data no formato DD/MM/AAAA ou digite 9999 para sair ");
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
    // printf("\n%d %d %d\n", data.edia, data.emes, data.eano);
    return data;
  }
  return data;
}

// uma função que recebe como parâmetro o dia, o mês, o ano e uma estrutura do tipo Data, onde o resultado deve ser armazenado, e retorna verdadeiro se a data estiver válida; caso contrário, retorna falso. A validação da data pode ser feita da seguinte forma:
// ■ meses com 30 dias: 04, 06, 09 e 11;
// ■ meses com 31 dias: 01, 03, 05, 07, 08, 10,12;
// ■ cálculo de ano bissexto: cada ano divisível por 4 é um ano bissexto(E); cada ano divisível por 100 não é bissexto
// (OU); todo ano divisível por 400 sempre é um ano bissexto;
// ■ uma função que recebe como parâmetro uma data do tipo string (no formato DD/MM/AAAA) e uma estrutura do tipo Data, onde o resultado deve ser armazenado, e retorna verdadeiro se a data estiver válida; caso contrário, retorna falso;
DataComp validacao_data(DataComp data)
{
  data = separa_data(data);
  // printf("\n%d %d %d\n", data.edia, data.emes, data.eano);
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
    return data;
  }
  else
  {
    printf("\nData válida. Verdadeiro");
    return data;
  }
}

// ■ uma função que recebe como parâmetro uma estrutura do tipo Data e um número inteiro, e retorna a soma do número de dias da data recebida;

void soma_data(DataComp data)
{
  int numerod, conta_dia, ano, dia, mes;
  
  data = validacao_data(data);
  
  if (data.cont != 0)
  {
    // printf("\n%d %d %d\n", data.edia, data.emes, data.eano);
    printf("\nInforme o número inteiro de dias: ");
    scanf("%d", &numerod);
  
    conta_dia = numerod;
    dia = data.edia;
    mes = data.emes;
    ano = data.eano;
    
    while (conta_dia > 0)
    {
      int biss = 0;
      if (conta_dia >= 365)
      {
        conta_dia = conta_dia - 365;
        ano = ano + 1;
        
        if (ano % 4 == 0)
        {
          biss = biss + 1;
        }
        else if ((ano % 4 == 0) && (ano % 100 == 0))
        {
          biss = 0;
        }
        else if ((ano % 4 == 0) && (ano % 100 == 0) && (ano % 400 == 0))
        {
          biss = biss + 1;
        }
        
        if (biss > 0)
        {
          conta_dia = conta_dia - 1;
        }
      }
        
      else if (conta_dia < 365 && conta_dia > 30)
      {
        conta_dia = conta_dia - 30;
        
        if ((mes == 1)||(mes == 3)||(mes == 5)||(mes == 7)||(mes == 8)||(mes == 10)||(mes == 12))
        {
          mes = mes + 1;
          conta_dia = conta_dia - 1;
        } 
        else if (mes == 2)
        {
          if (ano % 4 == 0)
          {
            biss = biss + 1;
          }
          else if ((ano % 4 == 0) && (ano % 100 == 0))
          {
            biss = 0;
          }
          else if ((ano % 4 == 0) && (ano % 100 == 0) && (ano % 400 == 0))
          {
            biss = biss + 1;
          }
          
          if ((biss == 0) && (mes == 2))
          {
            mes = mes + 1;
            conta_dia = conta_dia + 2;
          }
          else if ((biss > 0) && (mes == 2))
          {
            mes = mes + 1;
            conta_dia = conta_dia + 1;
          }
        }
        else
        {
          mes = mes + 1;
        }
      }   
        
      else if (conta_dia < 30)
      {
        dia = dia + 1;
        conta_dia = conta_dia - 1;
      }
    }
    
    while ((dia > 28) && (mes == 2))
    {
      mes = mes + 1;
      dia = dia - 28;
      int biss = 0;
      if (ano % 4 == 0)
      {
        biss = biss + 1;
      }
      else if ((ano % 4 == 0) && (ano % 100 == 0))
      {
        biss = 0;
      }
      else if ((ano % 4 == 0) && (ano % 100 == 0) && (ano % 400 == 0))
      {
        biss = biss + 1;
      }
      
      if (biss != 0)
      {
        dia = dia + 1;
      }
    }

    while ((dia > 30) && ((mes == 4)||(mes == 6)||(mes == 9)||(mes == 11)))
    {
      mes = mes + 1;
      dia = dia - 30;
    }

    while ((dia > 31) && (mes == 1)||(mes == 3)||(mes == 5)||(mes == 7)||(mes == 8)||(mes == 10)||(mes == 12))
    {
      mes = mes + 1;
      dia = dia - 31;
    }

    while (mes > 12)
    {
      ano = ano + 1;
      mes = mes - 12;
    }
  }
  else
  {
    return;
  }
  printf("\n%d %d %d\n", dia, mes, ano);
}

// ■ uma função que recebe como parâmetro uma estrutura do tipo Data e um número inteiro, e retorna a subtração do número de dias da data recebida;
void subtra_data(DataComp data)
{
  int numerod, conta_dia, ano, dia, mes;
  
  data = validacao_data(data);
  
  if (data.cont != 0)
  {
    // printf("\n%d %d %d\n", data.edia, data.emes, data.eano);
    printf("\nInforme o número inteiro de dias: ");
    scanf("%d", &numerod);
  
    conta_dia = numerod;
    dia = data.edia;
    mes = data.emes;
    ano = data.eano;
    
    while (conta_dia > 0)
    {
      int biss = 0;
      if (conta_dia >= 365)
      {
        conta_dia = conta_dia - 365;
        ano = ano - 1;
        
        if (ano % 4 == 0)
        {
          biss = biss + 1;
        }
        else if ((ano % 4 == 0) && (ano % 100 == 0))
        {
          biss = 0;
        }
        else if ((ano % 4 == 0) && (ano % 100 == 0) && (ano % 400 == 0))
        {
          biss = biss + 1;
        }
        
        if (biss > 0)
        {
          conta_dia = conta_dia - 1;
        }
      }
        
      else if (conta_dia < 365 && conta_dia > 30)
      {
        conta_dia = conta_dia - 30;
        
        if ((mes == 1)||(mes == 3)||(mes == 5)||(mes == 7)||(mes == 8)||(mes == 10)||(mes == 12))
        {
          mes = mes - 1;
          conta_dia = conta_dia - 1;
        } 
        else if (mes == 2)
        {
          if (ano % 4 == 0)
          {
            biss = biss + 1;
          }
          else if ((ano % 4 == 0) && (ano % 100 == 0))
          {
            biss = 0;
          }
          else if ((ano % 4 == 0) && (ano % 100 == 0) && (ano % 400 == 0))
          {
            biss = biss + 1;
          }
          
          if ((biss == 0) && (mes == 2))
          {
            mes = mes - 1;
            conta_dia = conta_dia + 2;
          }
          else if ((biss > 0) && (mes == 2))
          {
            mes = mes - 1;
            conta_dia = conta_dia + 1;
          }
        }
        else
        {
          mes = mes - 1;
        }
      }   
        
      else if (conta_dia < 30)
      {
        dia = dia - 1;
        conta_dia = conta_dia - 1;
      }
    }
    
    while ((dia < 1) && (mes == 2))
    {
      mes = mes - 1;
      dia = dia + 28;
      int biss = 0;
      if (ano % 4 == 0)
      {
        biss = biss + 1;
      }
      else if ((ano % 4 == 0) && (ano % 100 == 0))
      {
        biss = 0;
      }
      else if ((ano % 4 == 0) && (ano % 100 == 0) && (ano % 400 == 0))
      {
        biss = biss + 1;
      }
      
      if (biss != 0)
      {
        dia = dia - 1;
      }
    }

    while ((dia < 1) && ((mes == 4)||(mes == 6)||(mes == 9)||(mes == 11)))
    {
      mes = mes - 1;
      dia = dia + 30;
    }

    while ((dia < 1) && (mes == 1)||(mes == 3)||(mes == 5)||(mes == 7)||(mes == 8)||(mes == 10)||(mes == 12))
    {
      mes = mes - 1;
      dia = dia + 31;
    }

    while (mes < 1)
    {
      ano = ano - 1;
      mes = mes + 12;
    }
  }
  else
  {
    return;
  }
  printf("\n%d %d %d\n", dia, mes, ano);
}


// ■ uma função que recebe como parâmetro uma data e escreve essa data por extenso. Por exemplo, 25/03/2007 deve ser escrito como 25 de março de 2007. A função deve retornar verdadeiro se a operação for realizada com sucesso e falso, caso contrário;
void data_extenso(DataComp data)
{
  data = validacao_data(data);
  
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
  return;
}

// ■ uma função que receba como parâmetro o ano e retorne a data da Páscoa. O domingo de Páscoa é o primeiro domingo depois da primeira lua cheia do outono. 
void data_pascoa(DataComp data)
{
  int a, b, c, k, p, q, M, N, d, e;
  
  data = validacao_data(data);
  
  a = data.eano % 19;
  b = data.eano % 4;
  c = data.eano % 7;
  p = floor(data.eano/100);
  q = (13 + (8 * p)) / 25;
  M = (15 - q + p - (p/4)) % 30;
  N = (4 + p - (p/4)) % 7;
  d = (19 * a + M) % 30;
  e = (2*b + 4*c + 6*d + N) % 7;

  if ((d + e) < 10)
  {
    int dia = d + e + 22;
    printf("\nA páscoa é %d de março.\n", dia);
  }

  else if ((d + e) > 9)
  {
    int dia = d + e - 9;
    if (dia > 25)
    {
      printf("\nA páscoa é 19 de abril.\n");
    }
    else if (dia == 25)
    {
      printf("\nA páscoa é 18 de abril.\n");
    }
    else
    {
      printf("\nA páscoa é %d de abril.\n", dia);
    }
  }
  printf("\na:%d b:%d c:%d k:%d p:%d q:%d M:%d N:%d d:%d e:%d",a, b, c, k, p, q, M, N, d, e);
  return;
}

void puxar_valores(DataComp data)
{
  // separa_data(data); 
  // validacao_data(data);
  // soma_data(data);
  // subtra_data(data);
  data_extenso(data);
  // data_pascoa(data);
  return;
}

int main()
{
  DataComp data;
  puxar_valores(data);
  return 0;
}
