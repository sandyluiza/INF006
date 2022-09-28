// #include <stdio.h>
// int main()
// {
//   int vetor[8] = {3, 1, 4, 7, 2, 6, 8, 5}, i, j, h, g, aux;
//   // printf("%d", vetor[1]);
//   for (g=0; g<8; g++)
//   {
//     printf("%d", vetor[g]);    
//   }
  
//   for (i=0; i<8; i++)
//   {
//     for (j=0; j<8; j++)
//     {
//       if (vetor[i]<vetor[j])
//       {
//         aux = vetor[j];
//         vetor[j] = vetor[i];
//         vetor[i] = aux;
//         printf("\n");
//         for (h=0; h<8; h++)
//         {
//           printf("%d", vetor[h]);    
//         }
//       }
//     }
    
//   }
//   // for (i=0; i<8; i++)
//   // {
//   //   printf("%d", vetor[i]);    
//   // }
// }

// BUSCA LINEAR
// Percorre todos os elementos do vetor
// #include <stdio.h>
// int main()
// {
//   int n = 6, i=0, k = 2; 
//   int vetor[6] = {1, 3, 5, 8, 9, 7};
  
//   while (i<n)
//   {
//     printf("%d\n", vetor[i]);
//     if (vetor[i] == k)
//     {
//       printf("%d", i);
//     }
//     i = i+1;
//   }
//   printf("-1");
// }

// BUSCA LINEAR COM O VETOR ORDENADO
// #include <stdio.h>
// int main()
// {
//   int n = 6, i=0, k = 7; 
//   int vetor[6] = {1, 3, 5, 8, 9, 17};
  
//   while ((i<n) && (k>=vetor[i]))
//   {
//     printf("%d\n", vetor[i]);
//     if (vetor[i] == k)
//     {
//       printf("%d", i);
//     }
//     i = i+1;
//   }
//   printf("-1");
// }

// BUSCA BINÁRIA COM O VETOR ORDENADO
#include <stdio.h>
int main()
{
  int n = 12, i=0, k = 60, metade; 
  int vetor[12] = {1, 3, 5, 8, 9, 17, 32, 44, 51, 57, 60, 62};
  
  while (i<n)
  {
    metade = (n-i)/2;
    printf("%d\n", vetor[metade]);
    if (vetor[metade] == k)
    {
      printf("%d", i);
    }
    else if(vetor[metade] > k)
    {
      n = metade;
    }
    else if(vetor[metade] < k)
    {
      i = metade;
    }
    i = i+1;
  }
  printf("-1");
}

// 