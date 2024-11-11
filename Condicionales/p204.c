#include<stdio.h>
//Hecho por: José David Aguilar Ávalos
//1D
//Fecha: 29/09/22
int main() {
	float impuesto,sueldo;
	printf("Programa para calcular la suma de impuestos dependiendo el sueldo\n");
	printf("Ingresa tu sueldo base ");
	scanf("%f",&sueldo);
	fflush(stdin);
	if (sueldo>=10000) {
		impuesto = sueldo*.045;
		sueldo = sueldo-impuesto;
		printf("El impuesto a pagar es de $%f, por lo que su sueldo neto es de $%f\n",impuesto,sueldo);
	} else {
		impuesto = sueldo*.02;
		sueldo = sueldo-impuesto;
		printf("El impuesto a pagar es de $%f, por lo que tu sueldo neto es de $%f\n",impuesto,sueldo);
	}
	return 0;
}

