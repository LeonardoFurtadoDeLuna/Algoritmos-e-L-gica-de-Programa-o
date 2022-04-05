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
	float divi; //ponto flutuante - variável real
	
	a = b = soma = 0;
	divi = 0.0;
	
	printf("Digite o valor de A:");
	scanf("%d", &a); //LEIA a;
	
	printf("Digite o valor de B:");
	scanf("%d", &b); //LEIA b; "%d" = Formatação da variável; "&b" = O "&" serve para salvar a variável na memória;
	
	soma = a + b;
	printf ("A soma e: %d", soma);
	
	divi = (float) a/b; //casting (float) = Serve para calcular a parte real, se não por ele não faz a parte decimal
	
	printf("\nA divisao eh: %.2f", divi); // "\nA" = Força o programa a pular uma linha; ".2" = Define a qtd de casas decimais
	
}




