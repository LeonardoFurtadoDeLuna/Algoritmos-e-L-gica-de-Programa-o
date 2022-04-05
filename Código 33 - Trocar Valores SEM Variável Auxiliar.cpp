/*
	Name: AlgoritmoSemVariavelAuxiliar
	Copyright: 
	Author: leonardo.furtado
	Date: 11/05/20 17:11
	Description: Algoritmo para ler dois números e trocar seu valores sem variável auxiliar
*/

# include <stdio.h>
# include <conio.h> 

main ()

{
	int a, b;
	a = b = 0;
	
	printf("Digite a variavel A: ");
	scanf("%d", &a);
	
	printf("Digite a variavel B: ");
	scanf("%d", &b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("O valor de A eh: %d", a);
	printf("\nO valor de B eh: %d", b);
		
}
	
	
