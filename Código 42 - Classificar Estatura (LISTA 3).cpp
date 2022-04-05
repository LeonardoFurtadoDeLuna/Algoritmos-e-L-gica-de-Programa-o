/*
	Name: ClassificarEstatura
	Copyright: 
	Author: leonardo.furtado
	Date: 23/05/20 14:14
	Description: Algoritmo para classificar a altura.
*/

# include <stdio.h>
# include <conio.h> 

main ()

{
	float altura;
	altura = 0.0;
	
	printf("Informe sua altura: ");
	scanf("%f", &altura);
	
	if (altura <= 1.25)
	    printf("\nSua estatura e baixa");
	else if (altura <= 1.55)
	    printf("\nSua estatura e mediana");
	else
	    printf("\nSua estatura e alta");
	    
} //Fim do programa

