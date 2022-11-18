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
// #include <stdio.h>
// int main()
// {
//   int n = 12, i=0, k = 1, metade, cont = 0; 
//   int vetor[12] = {1, 3, 5, 8, 9, 17, 32, 44, 51, 57, 60, 62};
  
//   while (i<=n)
//   {
//     metade = (n+i)/2;
//     if (vetor[metade] == k)
//     {
//       printf("%d\n", vetor[metade]);
//       cont = cont + 1;
//       break;
//     }
//     else if(k > vetor[metade])
//     {
//       i = 1+metade;
//     }
//     else if(k < vetor[metade])
//     {
//       n = metade-1;
//     }

//   }
//   if (cont == 0)
//   {
//     printf("Não achou.\n");
//   }
// }

// ORDENAÇÃO DE VETOR
// ALGORITMO DA BOLHA - BUBBLESORT - NÃO É TÃO BOM
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
//       printf("\n");
//     }
    
//   }
//   // for (i=0; i<8; i++)
//   // {
//   //   printf("%d", vetor[i]);    
//   // }
// }