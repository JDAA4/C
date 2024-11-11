#include <stdio.h>

int main() 
{
    char seguir;
    float a,b,c,p;
    do
    {
    printf("INGRESA EL LADO 1 DEL TRIANGULO\n");
    scanf("%f",&a);
    printf("INGRESA EL LADO 2 DEL TRIANGULO\n");
    scanf("%f",&b);
    printf("INGRESA EL LADO 3 DEL TRIANGULO\n");
    scanf("%f",&c);
    p=a+b+c;
    printf("EL PERIMETRO ES:  ");
    printf("%.1f",p);
    
    printf( "\n %cDesea sacar otro perimetro(s/n)?: \n", 168 );
        scanf( "%c", &seguir );
    } while( seguir != 'n' ); 
    return 0;
}