#include<stdio.h>
#include<string.h>
#define idm 2
#define idc 1.5
#define idt 3
//Hecho por:Jose David Aguilar Avalos
//1D
//Fecha:02/10/22
int main(){
    char n[40];
    char cm[2];
    float ib,ici,i;
    printf("Programa para saber cuanto se tiene que pagar de impuestos dependiendo el municipio");
    printf("\ningrese su nombre ");
    scanf("%s",n);
    fflush(stdin);
    printf("\nDigite su ingreso bruto ");
    scanf("%f",&ib);
    fflush(stdin);
    printf("\nIngrese su municipio representando a Manzanillo con una M, Colima con una C y Tecoman con una T ");
    scanf("%s",cm);
    fflush(stdin);
    if(strcmp((cm),("T"))==0){
       i = ib*(idm/100);
        printf("\nNombre: %s",n);
        printf("\nClave del municipio: %s",cm);
        printf("\nIngreso en bruto: %f",ib);
        printf("\nTasa de impuesto: 2porciento");
        printf("\nImpuestos a pagar: %f",i);
    }else if(strcmp((cm),("C"))==0){
        i = ib*(idc/100);
        printf("\nNombre: %s",n);
        printf("\nClave del municipio: %s",cm);
        printf("\nIngreso en bruto: %f",ib);
        printf("\nTasa de impuesto: 1.5 porciento");
        printf("\nImpuesto a pagar: %f",i);
    }else if(strcmp((cm),("T"))==0){
        i = ib*(idt/100);
        printf("\nNombre: %s",n);
        printf("\nClave del municipio: %s",cm);
        printf("\nIngreso en bruto: %f",ib);
        printf("\nTasa de impuesto: 3 porciento");
        printf("\nImpuestos a pagar: %f",i);
    }else{
        printf("\nIngrese una clave correcta \n");
    }
    return 0;
}
