#include<stdio.h>

int main()
{
	int i, n, m;

	printf("\nIngresa un numero: ");
	scanf("%d", &m);

	printf("\nIngresa un numero mayor que el primero: ");
	scanf("%d", &n);

	if(m < n)
	{
		for(i = m; i <= n; i++)
		{
			printf("%d\n", i);
		}
	}
	else
	{
		printf("\nEl primer numero debe ser menor que el segundo...\n");
	}
}