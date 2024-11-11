void main()
{
int precio, porcen, costo;
float costofinal, desc;

	printf ("precio unitario:  $");
	scanf("%d",&precio);
	   costofinal= (costo-desc);


	printf ("cantidad   costo  porcentaje  descuento  costo_final\n");
	for (int cant=1;cant<=100;cant++)
	
	{
		if(cant<=19)
		{
			porcen=0;
			desc=0;
			costo=precio*cant;
			costofinal=precio*cant;
		}
		else if(cant>=20 && cant<=39)
		{
			porcen=10;
			desc=(precio*cant)*0.10;
			costo=(precio*cant);
			costofinal=(precio*cant)-desc;
		}
		else if(cant>=40 && cant<=75)
		{
			porcen=15;
			desc=(precio*cant)*0.15;
			costo=(precio*cant);
                        costofinal=(precio*cant)-desc;
		}
		else
		{
			porcen=20;
			desc=(precio*cant)*0.20;
                        costo=(precio*cant);
                        costofinal=(precio*cant)-desc;
                }
		
		printf("  %i|$%i | %%%i | $%0.3f| %f  \n",cant,costo,porcen,desc,costofinal);
	}
}