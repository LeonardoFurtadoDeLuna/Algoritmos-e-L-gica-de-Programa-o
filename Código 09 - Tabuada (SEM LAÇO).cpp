/*
	Name: lacoParaFaca.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 15/05/20 08:37
	Description:
*/


//Exerc�cios: Imoplementar um c�digo em C que monte na tela a tabuada de multiplica��o de n�mero escolhido pelo usu�rio

# include <stdio.h>
# include <conio.h> 


main ()
{
	int num, i; // intera��o
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
