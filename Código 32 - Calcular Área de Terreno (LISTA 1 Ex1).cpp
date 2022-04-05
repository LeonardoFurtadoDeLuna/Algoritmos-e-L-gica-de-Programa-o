/*
	Name: AlgoritmoÁreadeTerreno
	Copyright: 
	Author: leonardo.furtado
	Date: 11/05/20 17:11
	Description: Algoritmo para ler dois números e calcular a área de um terreno
*/

# include <stdio.h>
# include <conio.h> 

main ()

{
	float c, l, a;
	c = l = a = 0;
	
	puts("Programa para calcular a area de terreno");
	printf("Digite o comprimento da frente do terreno: ");
	scanf("%f", &c);
	printf("Digite o comprimento do fundo do terreno: ");
	scanf("%f", &l);
	a = (float) c*l;
	printf("A area do terreno que possui %.2f m2 de frente e %.2f m2 de fundo eh: %.2f m2", c, l, a);
	
}


