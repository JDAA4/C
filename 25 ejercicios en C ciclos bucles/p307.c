#include <stdio.h>

int main()
{
    float precio;
    printf("INGRESA EL PRECIO UNITARIO DE LOS PRODUCTOS:\n");
    scanf("%f",&precio);
    for(int i=0;i<=1000;i++)
    {
        printf("\n%d = %.2f\n",i, precio);
    }
}