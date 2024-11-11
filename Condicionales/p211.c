#include<stdio.h>
//Hecho por: José David Aguilar Ávalos
//1D
//Fecha:29/09/22
int main() {
	float cantidad,impuesto;
	printf("Programa para determinar el impuesto dado la cantidad\n");
	printf("Ingrese la cantidad\n");
	scanf("%f",&cantidad);
	if (cantidad<=1000) {
		impuesto = cantidad*(2.5/100);
		printf("El impuesto correspondiente es de %2.5\n");
		printf("Por lo que el impuesto es de $%f\n",impuesto);
	} else {
		impuesto = cantidad*(5.2/100);
		printf("El impuesto correspondiente es de %5.2\n");
		printf("Por lo que el impuesto es de $%f\n",impuesto);
	}
	return 0;
}

