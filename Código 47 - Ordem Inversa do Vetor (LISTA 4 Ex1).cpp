/*
	Name: Lista4Questão1.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 09/07/20 15:38
	Description: Fazer a carga de 25 elementos e exibi-los em ordem inversa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() 

{
	
	int numeros [25], num;
	
	int i=0;
	
	for (int i=0;i<=25;i++)
	{
		printf("Digite 25 numeros: ");
		scanf("%d", &num);
		numeros[i]=num;
	
	}//fim do for
	
	for (int i= 0; i<25; i++)
	
	{
	printf("%d", 26-numeros[i]);
	}//Fim do for
	
	return 0;
	
}//Fim do programa


