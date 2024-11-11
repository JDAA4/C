#include <stdio.h>
#include <math.h>
void main()
{
	float y;

	for(int i=1;i<=45;i++)
	{
	y =(2.56*pow(i,6))-(3.9756*pow(i,4))+12;
	printf("y = 2.56(%d)^6 - 3.9756x*(%d)^4 + 12 = %f\n",i,i,y);
	}

 

}