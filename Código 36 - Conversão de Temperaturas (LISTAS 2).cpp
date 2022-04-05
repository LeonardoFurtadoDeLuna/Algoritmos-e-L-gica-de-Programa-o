/*
	Name: ConversaoDeTemperatura
	Copyright: 
	Author: leonardo.furtado
	Date: 15/05/20 20:38
	Description: Algoritmo para converter temperatura Celsius em Fahrenheit.
*/

# include <stdio.h>
# include <conio.h> 

main ()
{
	
	float c, f;
	c = f = 0;
	
	puts("Programa para conversao de temperatura Celsius em Fahrenheit");
	printf("\nInforme a temperatura (Celsius): ");
	scanf("%f", &c);
	f = (float) (c*9/5)+32;
	printf ("A conversao da temperatura Celsius em Fahrenheit e: %.2f ", f);
	
}
