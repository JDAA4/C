#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//Hecho por: José David Aguilar Ávalos
//1D
//Fecha: 28/09/22
int main(){
	float apuesta;
	int dados;
	system("pause");
	srand(time(NULL));
	printf("Programa para apostar mediante dos dados aleatoriamente");
	printf("\nSi la cantidad total de los dos dados es de 7 o menor se te restaran $5 y si es de 8 o mayor se te bonificaran $5");
	printf("\nIngresa la cantidad de dinero que desea depositar cn un minimo de $5: ");
	scanf("%f",&apuesta);
	fflush(stdin);
	dados = (rand() % 11 )+ 2;
	if(dados <= 7){
		apuesta = apuesta - 5;
		printf("\nLa cantidad sacada por el dado es de %d por lo tanto has perdido y su saldo actual es de $%f",dados,apuesta);
	}else{
		apuesta = apuesta + 5;
		printf("\nFelicidades el valor de la suma de los dados es de %d, se te han depositado $5 a tu cuenta asi que tienes un saldo de $%f",dados,apuesta);
	}
	return 0;
}
