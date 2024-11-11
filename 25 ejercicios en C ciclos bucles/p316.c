#include <stdio.h>
#include <math.h>
void main()
{
	float z,n;
    printf("ESCRIBRE EL VALOR DE N:\n");
    scanf("%f",&n);
	for(int i=-10;i<=n;i+.5)
    {
        if(z==0)
        {
            printf("VALOR NO VALIDO");
        }
        z =(4*pow(i,4)-3.5*pow(i,2))/(i+5);
        printf("(4(%d)^4 - 3.5(%d)^2) / ((%d)-5) = %f\n",i,i,i,z);
    }
    
}
