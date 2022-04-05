/*
	Name: main.cpp
	Copyright: 
	Author: leonardo,furtado
	Date: 03/07/20 10:35
	Description: Programa para demonstar a utilização das ESTRUTURAS
	             MULTIVALORIZADAS HOMOGÊNEAS UNIDIMENCIONAIS
	             São os chamados vetores (Arrays)
*/

# include <stdio.h>
# include <conio.h> 

main ()

{
	int vet [5]; //Declaração de variáveis do tipo vetor
	int i;
	
	puts("Inicializando o Vetor...");
	for(int i = 0; i < 5; i++)
		vet[i] = 0;
	
	
	puts("\nVetor vazio...");
	for(int i = 0; i < 5; i++)
		printf("\n%d", vet[i]);
	
	vet[0] = 5;
	vet[1] = 22;
	vet[2] = 106;
	vet[3] = 1100;
	vet[4] = 52;
	
	puts("\nVetor carregado...");
	for(int i = 0; i < 5; i++)
		printf("\n%d ", vet[i]);
		
} //Fim do programa

