#include<stdio.h>
//Hecho por: José David Aguilar Ávalos
//1D
//Fecha:30/09/22
int main() {
	float venta,impuesto,multa,tci,tcm;
	printf("Programa para determinar el impuesto dado la cantidad\n");
	printf("Ingrese la cantidad\n");
	scanf("%f",&venta);
	if (venta<=528) {
		impuesto = venta*(8/100);
		venta = venta+impuesto;
		printf("El impuesto de ventas es del %8\n");
		printf("Por lo que el impuesto es de $%f\n",impuesto);
		printf("El total a pagar es de $%f\n",venta);
	} else {
		if (venta>528) {
			impuesto = venta*(4.7/100);
			tci = venta+impuesto;
			printf("El impuesto de ventas es del 4.7%\n");
			printf("Por lo que el impuesto es de $%f\n",impuesto);
			printf("El total a pagar es de $%f\n",tci);
			if (impuesto>329) {
				multa = impuesto*(6/100);
				tcm = venta+impuesto+multa;
				printf("Sin embargo, se le sumara una multa del %6 por exceder el limite de impuestos\n");
				printf("El total con la multa es de $%f\n",tcm);
			} else {
			}
		} else {
			printf("El numero ingresado es no valido\n");
		}
	}
	return 0;
}

