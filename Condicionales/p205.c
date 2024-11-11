#include<stdio.h>
#include<string.h>
#define libras 2.2
//Hecho por: José David Aguilar Ávalos
//1D
//Fecha: 29/09/22

int main() {
	float calorias,peso;
	char sexo[11];
	printf("Programa para calcular el numero de calorias de acuerdo al sexo\n");
	printf("Si es mujer exprese la palabra FEMENINO, si es hombre ingrese la palabra MASCULINO: ");
	scanf("%s",sexo);
	printf("\nIngresa tu peso\t");
	scanf("%f",&peso);
	if (strcmp(sexo,"FEMENINO")==0) {
		peso = peso*libras;
		calorias = peso*16;
		printf("\nLa cantidad de calorias que necesita diariamente siendo mujer es de %f",calorias);
	} else {
		peso = peso*libras;
		calorias = peso*18;
		printf("La cantidad de calorias que necesita diariamente siendo hombre es de %f\n",calorias);
	}
	return 0;
}

