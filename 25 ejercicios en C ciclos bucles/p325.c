#include <stdio.h>

int main()
{
    int numero,i,resto;
    printf("INGRESA UN NUMERO A CALCULAR\n");
    scanf("%d",&numero);
    printf("sus divisores son:\n");
    
        for (i=1;i<=numero;i++)
        {
            resto = numero%i;
            if (resto==0)
            {
                printf("%d\n",i," ");
            }
        }
    return 0;
}
 