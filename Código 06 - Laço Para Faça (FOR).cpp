/*
	Name: lacoParaFaca.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 15/05/20 08:37
	Description: programa para demonstrar a utiliza��o da estrutura Para...Fa�a como la�o de repeti��o
*/


# include <stdio.h>
# include <conio.h> 


main ()
{
	int cont, limite;
	limite = 0;
	
	printf("Digite um limite: ");
	scanf("%i", &limite);
	
	//Para... faca
	for(cont = 0; cont<limite ;cont=cont+1)
	    puts("Saudade da aula presencial");
	    
}
