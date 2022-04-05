/*
	Name: main.cpp
	Copyright: 
	Author: leonardo,furtado
	Date: 03/07/20 10:35
	Description: Programa para demonstar a utiliza��o das ESTRUTURAS
	             MULTIVALORIZADAS HOMOG�NEAS UNIDIMENCIONAIS
	             S�o os chamados vetores (Arrays)
*/

# include <stdio.h>
# include <conio.h> 

main ()

{
	int vet [5]; //Declara��o de vari�veis do tipo vetor
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

