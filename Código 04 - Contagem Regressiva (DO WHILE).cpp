/*
	Name: Regressiva.c
	Copyright: 
	Author: leonardo.furtado
	Date: 15/05/20 11:00
	Description: Contagem regressiva a partir de um numero digitado pelo usuario
*/

# include <stdio.h>
# include <conio.h> 


main ()
{
	int num = 0;
	
	printf("Digite um numero: "); scanf ("%i", &num);
	
	do
	{
		
		printf("\n%i", num--);
			
	}while(num > 0);
	printf("\n\nFOGO!!!");
	
}
