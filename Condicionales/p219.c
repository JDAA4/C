#include <stdio.h>
//Hecho por: Jose David Aguilar Avalos
//1D
//Fecha:02/10/22
int main()
{
  int numero;
  printf("Programa para imprimir en pantalla diferentes operaciones dependientos en ultimo digito ingresado");
  printf("\nIntroduce un numero entero positivo: "); 
  scanf("%d",&numero);

  if(numero % 10 == 0 || numero % 10 == 5 || numero % 10 == 7 || numero % 10 == 8) 
  {
    printf("El numero ingresado termina en 0, 5, 7 u 8 y su doble es %d \n",numero*2);
  }

  else if(numero % 10 == 1 || numero % 10 == 9) 
  {
    printf("El numero ingresado termina en 1 o 9 y su decima parte es %d \n",numero/10);
  }

  else{
  
    printf("El numero ingresado es  %d \n",numero);
  }
return 0;
}
