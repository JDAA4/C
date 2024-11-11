#include<stdio.h>
#include<string.h>
//Hecho por: Jose David Aguilar Avalos
//1D
//Fecha:01/10/22
int main() {
	char clave[6];
	float impuesto,total,sueldo;
	printf("Programa para calcular el los impuesto con el ingreso anual dependiendo la ciudad\n");
	printf("Ingrese el sueldo anual que desea calcular: \n");
	scanf("%f",&sueldo);
	printf("Ingrese la clave de la ciudad que desea saber el impuesto generado anual de un sueldo\n");
	printf("Opciones: M, R, J, B, otros\n");
	scanf("%s",clave);
	if (strcmp(clave,"M")==0) {
		impuesto = sueldo*(0.005/100);
		total = sueldo-impuesto;
		printf("Se le cobra $%f, por su sueldo anual de $%f, por lo que le queda un total de $%f\n",impuesto,sueldo,total);
	}
	else if(strcmp(clave,"R")==0) {
		impuesto = sueldo*(0.01/100);
		total = sueldo-impuesto;
		printf("Se le cobra $%f, por su sueldo anual de $%f, por lo que le queda un total de $%f\n",impuesto,sueldo,total);
	}
	else if (strcmp(clave,"J")==0) {
		impuesto = sueldo*(0.03/100);
		total = sueldo-impuesto;
		printf("Se le cobra $%f, por su sueldo anual de $%f, por lo que le queda un total de $%f\n",impuesto,sueldo,total);
	}
	else if (strcmp(clave,"B")==0) {
		impuesto = sueldo*(0.035/100);
		total = sueldo-impuesto;
		printf("Se le cobra $%f, por su sueldo anual de $%f, por lo que le queda un total de $%f\n",impuesto,sueldo,total);
	}
	else if (strcmp(clave,"otros")==0) {
		impuesto = sueldo*(0.001/100);
		total = sueldo-impuesto;
		printf("Se le cobra $%f, por su sueldo anual de $%f, por lo que le queda un total de $%f\n",impuesto,sueldo,total);
	} else {
		printf("Clave incorrecta\n");
	}
	return 0;
}

