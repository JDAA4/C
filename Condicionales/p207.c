#include<stdio.h>
//Hecho por: José David Aguilar Avalos
//1D
//Fecha:30/09/22
int main() {
	float comision,venta;
	printf("Programa para calcular la comision dependiendo la cantidad\n");
	printf("Ingrese la cantidad de la venta\n");
	scanf("%f",&venta);
	if (venta>=1540) {
		comision = venta*(4.5/100);
		printf("La comision de venta es de $%f\n",comision);
	} else {
		comision = venta*(3.9/100);
		printf("La comision de venta es de $%f\n",comision);
	}
	return 0;
}

