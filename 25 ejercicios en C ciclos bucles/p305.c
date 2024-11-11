#include <stdio.h>

int main()
{
    int b,c;
    printf("IMPRESION DE # PARES DEL 1 A 1000\n");
    for(int i=1;i<=1000;i++)
    {
        if (i%2==0)
        {
        printf("%d es par\n",i);
        }        
        else
        {
          printf("%d es impar \n",i);
        }
    }
}