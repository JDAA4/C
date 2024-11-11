#include<stdio.h>
#include<string.h>
//Hecho por: josé David Aguilar Ávalos
// 1D
//Fecha:28/09/22
int main() {
	char g1[2],g2[2],g3[2];
	float h,m;
	printf("Programa para saber que genero hay mas dentro dentro de 3 variables colocando H para hombres y F para mujeres\n");
	printf("Ingrese el primer genero ");
	scanf("%s",g1);
	fflush(stdin);
	printf("\nIngrese el segundo genero ");
	scanf("%s",g2);
	fflush(stdin);
	printf("\nIngrese el tercer genero ");
	scanf("%s",g3);
	fflush(stdin);
	if (strcmp(g1,"H")==0) {
		h++;
	} else {
		m++;
	}
	if (strcmp(g2,"H")==0) {
		h++;
	} else {
		m++;
	}
	if (strcmp(g3,"H")==0) {
		h++;
	} else {
		m++;
	}
	printf("\nA ingresado %f generos de hombre y %f generos de mujer\n",h,m);
	return 0;
}

