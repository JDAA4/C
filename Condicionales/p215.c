#include<stdio.h>
//Hecha por:José David Aguilar
//1D
//Fecha:29/09/22
#define pc1 24.05
#define pc2 105.00
#define pc3 10.35
#define pc4 16.00
int main(){
    float c1,c2,c3,total;
    printf("Programa para calcular la cantidad ha pagar de algunos productos seleccionados");
    printf("\nLista de precios de los productos");
    printf("\n1.\t24.05\n2.\t105.00\n3.\t10.35\n4.\t16.00\n\n");
    printf("Ingrese la  cantida del producto uno que desea ");
    scanf("%f",&c1);
    fflush(stdin);
    printf("\nIngrese la cantidad del producto dos que desea ");
    scanf("%f",&c2);
    fflush(stdin);
    printf("\nIngrese la cantidad del tercer producto que desea ");
    scanf("%f",&c3);
    fflush(stdin);
    c1 = c1*pc1;
    c2 = c2*pc2;
    c3 = c3*pc3;
    total = c1+c2+c3+c4;
    printf("\nEl subtotal es de %f",total);
    if (total>=1000){
        float descuento,tcd;
        descuento =total*(2.5/100);
        tcd = total - descuento;
        printf("\nLa cantidad a pagar es de $%f se le ha hecho un 2.5 de descuento\n",tcd);
    }else if (total>=800 && total<1000){
        float descuento,tcd;
        descuento = total*(1.5/100);
        tcd = total - descuento;
        printf("\nLa cantidad a pagar es de $%f se le ha hecho un 1.5 de descuento\n",tcd);
    }else{
        printf("\nLa cantidad a pagar es de $%f\n",total);
    }
    return 0;
}
