#include<stdio.h>

int main() {
	int minutos,hora;
	printf("Programa para sumar 1 minuto al tiempo ingresado\n");
	printf("Ingrese la hora que desea\n");
	scanf("%d",&hora);
	printf("Ingrese los minutos\n");
	scanf("%d",&minutos);
	if (minutos==59) {
		hora++;
		printf("La nueva hora es %d:00\n",hora);
	} else {
		minutos++;
		printf("La nueva hora es %d:%d\n",hora,minutos);
	}
	return 0;
}

