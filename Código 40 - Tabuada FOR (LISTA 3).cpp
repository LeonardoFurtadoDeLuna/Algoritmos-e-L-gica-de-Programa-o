/*
	Name: Tabuadafor
	Copyright: 
	Author: leonardo.furtado
	Date: 23/05/20 13:19
	Description: Algoritmo para ler um número é montar sua tabuada
*/


# include <stdio.h>
# include <conio.h> 

main ()
{
	int num, i;
	num = i = 0;
	
	printf("Informe um numero: ");
	scanf("%d", &num);
	
	for(i = 1; i <= 10; i++)
	{
		printf("\n%d x %d = %d", num, i, num*i);	
	} //Fim do for
	
} //Fim do programa
