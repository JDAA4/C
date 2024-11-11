#include<stdio.h>
//Hecho por: José David Aguilar Ávalos
//1D
//Fecha:01/10/22
int main() {
	float cal;
	char nombre[40];
	system("pause");
	printf("Programa para calificar a los trabajadores de 0 a 100\n");
	printf("Ingrese el nombre del trabajador\n");
	fgets(nombre,40,stdin);
	fflush(stdin);
	printf("Ingrese su calificacion\n");
	scanf("%f",&cal);
	fflush(stdin);
	if (cal>=96) {
		printf("El trabajador %s tiene una calificion de %f que se considera de excelencia \n",nombre,cal);
	} else {
		if (cal>=78 && cal<96) {
			printf("El trabajador %s tiene una calificion de %f que se considera buena \n",nombre,cal);
		} else {
			printf("El trabajador %s tiene una calificion de %f que se considera deficiente \n",nombre,cal);
		}
	}
	return 0;
}

