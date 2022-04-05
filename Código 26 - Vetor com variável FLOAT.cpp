/*
	Name: Vetor3.cpp
	Copyright: 
	Author: leonardo,furtado
	Date: 03/07/20 10:35
	Description: Programa para demonstar a utilização das ESTRUTURAS
	             MULTIVALORIZADAS HOMOGÊNEAS UNIDIMENCIONAIS
	             São os chamados vetores (Arrays)
	             Trabalhando com vetores de VARIÁVEL FLOAT
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h> //biblioteca de localizacao 

main ()

{
	setlocale(LC_ALL, "Portuguese"); 
	float valores[7], vlr;
	int x = 0;
	
	puts("Digite 7 valores reais: \n");
	
	do
	{
		printf("Digite o %dº valor: ", x+1);
		scanf("%f", &vlr);
		valores[x] = vlr;
		x++;	
	}while(x < 7);
	
	float total = 0.0;
	x = 0;
	
	while(x<7)
	{
		total = total + valores[x];
		x = x + 1;	
	}
	
	printf("\nTotal da compra: %.2f", total);
	
} //Fim do programa

