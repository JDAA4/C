#include <stdio.h>

int main() 
{
    int M,N,i,menor, multiplo, hay_multiplo;
 printf("\nPrograma que simplifica fracciones.\n\n");
 printf("Introduzca el numerador: ");
 scanf("%d", &M);
 printf("Introduzca el denominador: ");
 scanf("%d", &N);
 
    do
 {
    if (M < N )
       menor = M;
    else
       menor = N;
 
    i=2;
    hay_multiplo=0;
    while (i <= menor && hay_multiplo == 0)
    {  
      if (M % i == 0 && N % i == 0)
      {
         multiplo = i;
         hay_multiplo = 1;
      }
      i++;
    }
    if (hay_multiplo == 1)
    {
       M=M/multiplo;
       N=N/multiplo;
       printf(" = %d/%d \n", M, N);
    }
 }while (hay_multiplo==1);
 
}
  