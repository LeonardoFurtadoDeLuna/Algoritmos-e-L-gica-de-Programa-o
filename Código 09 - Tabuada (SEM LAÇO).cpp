/*
	Name: lacoParaFaca.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 15/05/20 08:37
	Description:
*/


//Exercícios: Imoplementar um código em C que monte na tela a tabuada de multiplicação de número escolhido pelo usuário

# include <stdio.h>
# include <conio.h> 


main ()
{
	int num, i; // interação
	num = 0;
	i = 1;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	printf("\n%d x %d = %d", num, i, num*i);
	printf("\n%d x %d = %d", num, ++i, num*i);
	printf("\n%d x %d = %d", num, ++i, num*i);
	printf("\n%d x %d = %d", num, ++i, num*i);
	printf("\n%d x %d = %d", num, ++i, num*i);
	printf("\n%d x %d = %d", num, ++i, num*i);
	printf("\n%d x %d = %d", num, ++i, num*i);
	printf("\n%d x %d = %d", num, ++i, num*i);
	
}
