#include<stdio.h>
#include<stdlib.h>
//Hecho por: José David Aguilar Ávalos
//1D
//Fecha:01/10/22
int main() {
	srand(time(NULL));
	float td1,td2;
	printf("Programa para atinar a un tiro de dados\n");
	printf("Sí sale el valor de 7 en la primera tirada de dados y en la segunda 11 usted gana \n");
	printf("Si sale el valor 2 en la primera tirada y en la seginda 12 yo gano\n");
	printf("Tirando dados...\n");
	system("pause");
	td1 = (rand()%11)+2;
	td2 = (rand()%11)+2;
	printf("Tirada uno: %f\n",td1);
	printf("Tirada dos: %f\n",td2);
	if (td1==7 && td2==11) {
		printf("Has ganado\n");
	} else {
		if (td1==2 && td2==12) {
			printf("Yo gano\n");
		} else {
			printf("Nadie gana, intentalo de nuevo\n");
		}
	}
	return 0;
}

