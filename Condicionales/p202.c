#include<stdio.h>
//Hecho por: José David Aguilar Ávalos
//1D
//Fecha:28/09/22

int main() {
	float c1,c2,c3,p;
	printf("Programa para saber el promedio de 3 calificaciones y saber si se ha aprobado");
	printf("\nIngrese la primera calificacion ");
	scanf("%f",&c1);
	printf("\nIngrese la segunda calificacion ");
	scanf("%f",&c2);
	printf("\nIngrese la segunda calificacion ");
	scanf("%f",&c3);
	p = (c1+c2+c3)/3;
	if (p>=6) {
		printf("\nFelicidadea has aprobado, tu calificacion es de% f",p);
	} else {
		printf("\nNo has alcanzado el puntaje minimo");
	}
	return 0;
}

