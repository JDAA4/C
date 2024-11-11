#include <stdio.h>

int main()
{
    int n;
    printf("LISTA DE # DEL 1 AL QUE ELIJAS Y SU CUADRADO\n");
    printf("INGRESA UN NUMERO:\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        printf("\n%d + %d = %d\n",i,n,i*i);
    }
    return 0;
}
