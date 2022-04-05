/*
	Name: Lista4Questão5.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 09/07/20 15:38
	Description: Algoritmo que intercala os valores de dois vetores em um terceiro resultando 
	             em uma MARSHALLING.
*/


# include <stdio.h>
# include <conio.h> 
# include <locale.h> //biblioteca de localizacao 

main ()

{
	setlocale(LC_ALL, "Portuguese"); 

	int x;
	char vet1[5], vet2[5], vet3[10], vlr;
	
	x = 0;
	
	puts("PROGRAMA DEMONSTRATIVO DE UMA MARSHALLING\n");
	puts("Digite 5 caracteres para o 1° vetor\n");
	
	for(x = 0; x <= 4 ; x++)
	{
		printf("Digite o %dº caracter: ", x+1);
		scanf(" %c", &vlr);
		vet1[x] = vlr;
	}
	
	puts("\nDigite 5 caracteres para o 2° vetor\n");
	
	for(x = 0; x <= 4 ; x++)
	{
		printf("Digite o %dº valor: ", x+1);
		scanf(" %c", &vlr);
		vet2[x] = vlr;
	}
	
	vet3[0] = vet1[0];
	vet3[1] = vet2[0];
	vet3[2] = vet1[1];
	vet3[3] = vet2[1];
	vet3[4] = vet1[2];
	vet3[5] = vet2[2];
	vet3[6] = vet1[3];
	vet3[7] = vet2[3];
	vet3[8] = vet1[4];
	vet3[9] = vet2[4];
	
	puts("\nValor do 1° vetor");
	
	for(int x = 0; x <= 4; x++)
	{
	 printf("%c ", vet1[x]);
	}
	
	puts("\n\nValor do 2° vetor");
	
	for(int x = 0; x <= 4; x++)
	{
	 printf("%c ", vet2[x]);	
	}
	
	puts("\n\nValor do 3° vetor");	
	
	for(int x = 0; x <= 9; x++)
    {
    	printf("%c ", vet3[x]);
	}

}//Fim do programa
