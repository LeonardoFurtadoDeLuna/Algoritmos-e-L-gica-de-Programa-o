/*
	Name: Hello.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 13/05/20 15:40
	Description: Primeiro programa para espantar a maldicao do Hello Wold.
*/

# include <stdio.h>
# include <conio.h> 
//# include <stidlib.h>


main ()
{
	int a, b, soma; // int (Inteiro), float (Real)
	float divi; //ponto flutuante - vari�vel real
	
	a = b = soma = 0;
	divi = 0.0;
	
	printf("Digite o valor de A:");
	scanf("%d", &a); //LEIA a;
	
	printf("Digite o valor de B:");
	scanf("%d", &b); //LEIA b; "%d" = Formata��o da vari�vel; "&b" = O "&" serve para salvar a vari�vel na mem�ria;
	
	soma = a + b;
	printf ("A soma e: %d", soma);
	
	divi = (float) a/b; //casting (float) = Serve para calcular a parte real, se n�o por ele n�o faz a parte decimal
	
	printf("\nA divisao eh: %.2f", divi); // "\nA" = For�a o programa a pular uma linha; ".2" = Define a qtd de casas decimais
	
}




