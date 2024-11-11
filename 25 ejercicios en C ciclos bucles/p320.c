#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int r = 1, fac;

    printf("\nIntroduzca un numero: ");
    scanf(" %ld", &fac);
    
    //r = 1;

    while(fac > 1) 
    {
       r *= fac;
       printf(" %ld x", fac);
       fac--;
    }
    printf(" 1 = %ld\n\n", r);
 }