#include<stdio.h>
//Hecho por: Jose David Aguilar Avalos
//1D
//Fecha: 02/10/22
int main(){
    float a,b,c;
    printf("Programa para calcular cual de los 3 numeros inngresados es el mayor");
    printf("\nIngrese el prrimer numero ");
    scanf("%f",&a);
    fflush(stdin);
    printf("\nIngrese el segundo numero ");
    scanf("%f",&b);
    fflush(stdin);
    printf("\nIngrese el tercer numero ");
    scanf("%f",&c);
    fflush(stdin);
    if(a > b && a > c){
        printf("\nEl primer numero es el mayor\n");
    }else if(b > a && b > c ){
            printf("\nEl segundo numero es el mayor\n");
        }else if(c>a && c > b){
            printf("\nEl tercer numero es el mayor\n");
        }else{
            printf("\nDigite un numero valido\n");
        }
    return 0;
}
