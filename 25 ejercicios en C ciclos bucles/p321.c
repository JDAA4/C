#include <stdio.h>
#include <math.h>
int main()
{
    int num,x,cont=0;
    for (num=2;num<=500;num++)
    {
        for(x=2;x<=num;x++)
            if(num%x==0)
            cont++;
        if(cont==1)
            printf("%d-",num);
        cont=0;
    }
    
}