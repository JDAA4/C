#include <stdio.h>

int main()
{
    int i, numero=4;

    printf( "\n   La tabla de multiplicar del 4 es:\n");

     /* Inicio del anidamiento */
    for ( i = 1 ; i <= 10 ; i++ )
        printf( "\n   %d * %d = %d", i, numero, i * numero );
    
    return 0;
}