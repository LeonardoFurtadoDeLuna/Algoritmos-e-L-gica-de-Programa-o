/*
	Name: Vetor2.cpp
	Copyright: 
	Author: leonardo,furtado
	Date: 03/07/20 10:35
	Description: Programa para demonstar a utilização das ESTRUTURAS
	             MULTIVALORIZADAS HOMOGÊNEAS UNIDIMENCIONAIS
	             São os chamados vetores (Arrays)
	             Trabalhando com vetores de caracteres - tipo char
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h> //biblioteca de localizacao 

main ()

{
	setlocale(LC_ALL, "Portuguese"); 
	char resp[10], resposta;
	int i;
	
	puts("\nCarregando o vetor com respostas do usuário: \n");
	for(i = 0; i < 10; i++)
	{
		printf("Responda %da S/N: ", i);
		scanf(" %c", &resposta);
		resp[i] = resposta;
	}
	
	puts("\n\nVetor com as respostas do usuário...");
	for(i = 0; i < 10; i++)
	{
		if (resp[i] == 's')
		    printf("\nSim");
		else
		    printf("\nNão");
	}
		
} //Fim do programa
