#include <stdio.h>
int x=0,y=1,z=0;
int fibo()
{
    z=x+y;
    x=y;
    y=z;
    return z;
}
int main()
{
    int num=11,cont;
    for(cont=1;cont<num;cont++)
    {
       printf("%d\n",fibo()); 
    }
    return 0;
}