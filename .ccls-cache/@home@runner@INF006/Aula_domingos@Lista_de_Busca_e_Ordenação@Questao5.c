// 5 – Crie um programa que dado uma string, coloque as letras dela em ordem crescente pelo algoritmo quick-sort.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void quick_sort();

void quick_sort(char *a, int left, int right) 
{
  int i, j, x, y;

  i = left;
  j = right;
  x = a[(left + right) / 2];
   
  while(i <= j) {
      while(a[i] < x && i < right) {
          i++;
      }
      while(a[j] > x && j > left) {
          j--;
      }
      if(i <= j) {
          y = a[i];
          a[i] = a[j];
          a[j] = y;
          i++;
          j--;
      }
  }
     
  if(j > left) {
      quick_sort(a, left, j);
  }
  if(i < right) {
      quick_sort(a, i, right);
  }
  
  return;
}



int main()
{
  char strin[100];
  int tam_str;
  getchar();
  printf("Informe a string ");
  fgets(strin, 100, stdin);
  size_t l1 = strlen(strin) - 1;
  if (strin[l1] == '\n')
  {
    strin[l1] = '\0';
  }
  
  tam_str = strlen(strin);
  quick_sort(strin, 0, tam_str);


    
  return 0;
}