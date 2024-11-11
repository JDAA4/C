#include<stdio.h>
//Hecho por: José David aguilar Ávalos
//1D
//Fecha: 01/10/22
int main() {
	float cal1,cal2,cal3,p2;
	printf("Programa para saber si se esta mejorando o empeorando en la tecera parcial de 0 10\n");
	printf("Ingrese su calificacion de la primera parcial\n");
	scanf("%f",&cal1);
	printf("Ingrese su calificacion de la segunda parcial\n");
	scanf("%f",&cal2);
	printf("Ingrese su calificacion de la tercera parcial\n");
	scanf("%f",&cal3);
	p2 = (cal1+cal2)/2;
	if (cal3>p2) {
		printf("Mejorando\n");
	} else {
		if (cal3<=5) {
			printf("Empeorando\n");
		}
	}
	return 0;
}

