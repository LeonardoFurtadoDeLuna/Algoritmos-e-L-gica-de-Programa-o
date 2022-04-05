/*
	Name: CorrecaoQuestao1.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 05/06/20 09:21
	Description: Programa para ler um numero e realizar cálculos segundo análise
*/

# include <stdio.h>
# include <conio.h> 

main ()

{
	int num, resultado, divi, resto;
	num = resultado = divi = resto = 0;
	
	printf("Digite um numero para ser analisado: ");
	scanf("%d", &num);
	
	divi = num/2;
	resto = num - (divi * 2);
	
	if (num == 0)
	    puts("Voce digitou o numero ZERO!!!");
	else if (resto == 0)
	    {
	     resultado = num * (num * 2); //número multiplicado pelo seu dobro
	     printf("O resultado eh %d", resultado);
		}
	    
	else
	    {
	     resultado = num * num * num; //número elevado ao cubo
	     printf("O resultado eh %d", resultado);
		}
	
	
}//Fim dom programa
