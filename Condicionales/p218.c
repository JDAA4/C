#include<stdio.h>
//Hecho por: José David Aguilar Ávalos
//1D
//Fecha: 01/10/22
int main(){
    int d,m,a;
    printf("Programa para fecha de nacimiento extendida de una persona");
    printf("\nIntroduce el dia");
    scanf("%d",&d);
    fflush(stdin);
    printf("\nIntroduce el mes");
    scanf("%d",&m);
    fflush(stdin);
    printf("\nIntroduce el año");
    scanf("%d",&a);
    fflush(stdin);
    if(d==0 || d >32){
        printf("\nDia invalido");
        return 0;
    }
    if (m==0 || m >13){
        printf("\nMes invalido");
        return 0;
    }
    if(a <100){
        a = a + 1900;
        
    } else{
     printf("\nEl año esta mal ingresado");
        return 0;
    }
    if (m==1){
        printf("\nLa fecha es: %d de Enero de %d",d,a);
    }else if (m==2){
        printf("\nLa fecha es: %d de Febrero de %d",d,a);
    }else if(m==3){
        printf("\nLa fecha es: %d de Marzo de %d",d,a);
    }else if(m==4){
        printf("\nLa fecha es: %d de Abril de %d",d,a);
    }else if(m==5){   
        printf("\nLa fecha es: %d de Mayo de %d",d,a);
    }else if(m==6){
        printf("\nLa fecha es: %d de Junio de %d",d,a);
    }else if(m==7){
        printf("\nLa fecha es: %d de julio de %d",d,a);
    }else if(m==8){
        printf("\nLa fecha es: %d de Agosto de %d",d,a);
    }else if(m==9){
        printf("\nLa fecha es: %d de septiembre de %d",d,a);
    }else if (m==10){
        printf("\nLa fecha es: %d de octubre de %d",d,a);
    }else if(m==11){
        printf("\nLa fecha es: %d de noviembre de %d",d,a);
    }else{
        printf("\nLa fecha es: %d de diciembre de %d",d,a);
    }
        
    return 0;
}
