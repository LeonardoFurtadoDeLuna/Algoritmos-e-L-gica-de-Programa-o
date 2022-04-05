/*
	Name: lacoEnquantoFaca.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 15/05/20 08:37
	Description: Programa para demonstrar o laço de repetição "Enquanto...Faça
*/


# include <stdio.h>
# include <conio.h> 


main ()
{
	int x, limite;
	x = limite = 0;
	
	printf("Digite limite: ");
	scanf("%d", &limite);
	
	//Laço de repetição 'Enquanto...Faça"
	while (x < limite)
	{
		printf("\nHoje esta nublado...");
		x = x + 1;
	}
	

}
