// Criar o codigo para solução das seguintes questões:
// 1) Que imprima o horóscopo de varias pessoas, a aprtir da sua data de nascimento (ddmm). O fim é determinado quando se digita 9999 para data. considera que a data foi digitada corretamente.
// 01-20 Capricornio
// 02-19 Aquario
// 03-20 Peixes
// 04-20 Aries
// 05-20 Touro
// 06-20 Gemeos
// 07-21 Cancer
// 08-22 Leão
// 09-22 Virgem
// 10-22 Libra
// 11-21 Escorpião
// 12-21   Sargitario
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
  char dataNasc[12], sdia[3], smes[3], sano[12];
  int i, j, k, dia, mes, ano;

  // Lendo a data de nascimento
  while (strcmp(dataNasc,"9999")!=0)
  {
    strcmp(sdia," ");
    strcmp(smes," ");
    strcmp(sano," ");
    dia = 0;
    mes = 0;
    ano = 0;
    
    printf("\nInforme a data de nascimento (Para sair digite 9999 ) ");
    fgets(dataNasc, 12, stdin);
    size_t lo = strlen(dataNasc) - 1;
    if (dataNasc[lo] == '\n')
    {
      dataNasc[lo] = '\0';
    }

    if (strlen(dataNasc)<8 && (strcmp(dataNasc,"9999")!=0))
    {
      printf("Digite a data no formato DD/MM/AAAA ");
    }
      
    // Transformando a string em números
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

      // Determinando o signo
      if ((dia>21 && mes==12)||(dia<21 && mes==1))
      {
        printf("Capricórnio");
      }
      else if ((dia>20 && mes==1)||(dia<20 && mes==2))
      {
        printf("Aquário");
      }
      else if ((dia>19 && mes==2)||(dia<21 && mes==3))
      {
        printf("Peixes");
      }
      else if ((dia>20 && mes==3)||(dia<21 && mes==4))
      {
        printf("Áries");
      }
      else if ((dia>20 && mes==4)||(dia<21 && mes==5))
      {
        printf("Touro");
      }
      else if ((dia>20 && mes==5)||(dia<21 && mes==6))
      {
        printf("Gêmeos");
      }
      else if ((dia>20 && mes==6)||(dia<22 && mes==7))
      {
        printf("Câncer");
      }
      else if ((dia>21 && mes==7)||(dia<23 && mes==8))
      {
        printf("Leão");
      }
      else if ((dia>22 && mes==8)||(dia<23 && mes==9))
      {
        printf("Virgem");
      }
      else if ((dia>22 && mes==9)||(dia<23 && mes==10))
      {
        printf("Libra");
      }
      else if ((dia>22 && mes==10)||(dia<22 && mes==11))
      {
        printf("Escorpião");
      }
      else if ((dia>21 && mes==11)||(dia<22 && mes==12))
      {
        printf("Sargitário");
      }
    }
  }
}
