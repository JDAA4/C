#include<stdio.h>
int main() {
	float a,b,c;
	printf("Programa para encontrar cual de los 3 valores ingresados es el menor sin poner numeros iguales\n");
	printf("Ingrese la primera cantidad\n");
	scanf("%f",&a);
	printf("Ingrese la segunda cantidad\n");
	scanf("%f",&b);
	printf("Ingrese la tercera cantidad\n");
	scanf("%f",&c);
	if (a<b && a<c) {
		printf("La primera cantidad es el numero menor\n");
	} else {
		if (b<a && b<c) {
			printf("La segunda cantidad es el numero menor\n");
		} else {
			printf("La tercera cantidad es el numero menor\n");
		}
	}
	return 0;
}

