#include <stdio.h>

int main()
{
    int n;
    printf("INGRESA UN NUMERO:\n");
    scanf("%d",&n);
    for(int i=2;i<=n;i+=2)
    {
        printf("%d\n",i);
    }
}