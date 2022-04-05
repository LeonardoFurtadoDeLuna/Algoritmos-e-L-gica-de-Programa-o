/*
	Name: CalcularFatorial
	Copyright: 
	Author: leonardo.furtado
	Date: 23/05/20 18:39
	Description: Calcular o fatorial de um número.
*/

# include <stdio.h>
# include <conio.h> 

main ()

{ 
    int a, cont;
    a = cont = 0;
    
    printf ("Digite o numero: ");
    scanf("%d", &a);
    
    cont = a;
    
    
    printf ("%d! = %d", a, a);
    
    do 
	{
		a = a - 1;
		printf(" x %d", a);
		cont = cont * a;
		
	}while (a > 1); 
	
	printf(" = %d", cont);
	
} 
