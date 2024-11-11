#include <stdio.h>
#include <math.h>
void main()
{
	int d;

	for(int i=13;i<=26;i++)
	{
	  d =pow(i,4)+pow(i,3)-pow(i,2)-5;
	  printf("f(x) = (%d)^4 + (%d)^3 - (%d)^2 - 5 = %d\n",i,i,i,d);
	}
}