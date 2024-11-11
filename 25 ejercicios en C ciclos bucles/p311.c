#include <stdio.h>

int main()
{
    int i, numero=4,numero1=5;

    printf( "\n   La tabla de multiplicar del 4 y 5 es:\n");

     /* Inicio del anidamiento */
    for ( i = 1 ; i <= 10 ; i++ )
        printf( "\n   %d * %d = %d\n\n", i, numero, i * numero );

    for ( i = 1 ; i <= 10 ; i++ )
        printf( "\n   %d * %d = %d", i, numero, i * numero1 );
    
    return 0;
}