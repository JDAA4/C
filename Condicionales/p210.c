#include<stdio.h>
//Hecho por: José David Aguilar Ávalos
//1D
// Fecha:30/09/22
int main() {
	float a,b,c;
	printf("Programa para acomodar 3 valores ingresados de mayor a menor sin poner numeros iguales\n");
	printf("Ingrese la primera cantidad\n");
	scanf("%f",&a);
	printf("Ingrese la segunda cantidad\n");
	scanf("%f",&b);
	printf("Ingrese la tercera cantidad\n");
	scanf("%f",&c);
	if (a>b && a>c && b>c) {
		printf("%f\n",a);
		printf("%f\n",b);
		printf("%f\n",c);
	} else {
		if (a>b && a>c && c>b) {
			printf("%f\n",a);
			printf("%f\n",c);
			printf("%f\n",b);
		} else {
			if (b>a && b>c && a>c) {
				printf("%f\n",b);
				printf("%f\n",a);
				printf("%f\n",c);
			} else {
				if (b>a && b>c && c>a) {
					printf("%f\n",b);
					printf("%f\n",c);
					printf("%f\n",a);
				} else {
					if (c>a && c>b && a>b) {
						printf("%f\n",c);
						printf("%f\n",a);
						printf("%f\n",b);
					} else {
						if (c>a && c>b && b>a) {
							printf("%f\n",c);
							printf("%f\n",b);
							printf("%f\n",a);
						} else {
							printf("Dos o mas numeros son iguales\n");
						}
					}
				}
			}
		}
	}
	return 0;
}

