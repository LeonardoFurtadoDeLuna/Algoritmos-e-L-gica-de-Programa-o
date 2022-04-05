/*
	Name: SequenciaELimite
	Copyright: 
	Author: leonardo.furtado
	Date: 23/05/20 18:03
	Description: Algoritmo para criar uma sequência de números até o limite e depois de maneira decrescente
*/

# include <stdio.h>
# include <conio.h> 

main ()

{
	int limite, cont;
	limite = cont = 0;
	
	printf("Informe o limite: ");
	scanf("%d", &limite);
	
	while (cont != limite)
	{
		printf("\n%d", cont);
		cont = cont + 1;
	}
	
	while (cont >= 0)
	{
		printf("\n%d", cont);
		cont = cont - 1;
	}
		
	
	
}

