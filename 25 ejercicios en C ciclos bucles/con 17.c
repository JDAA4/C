int main() {
	float i;
	float n;
	printf("lista del 1 hasta N\n");
	printf("ingresa tu numero\n");
	scanf("%f",&n);
	for (i=1;i<=n;i+=1) {
		printf("%f+%f=%f\n",i,n,i*i);
	}
	return 0;
}
