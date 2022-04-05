/*  
    Name: TomadaDecisao.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 13/05/20 15:40
	Description: Programa para demonstrar a estrutura lógica para a tomada de descisão
*/

# include <stdio.h>
# include <conio.h> 


main ()
{
	int x, y, result;
	x = y = result = 0;
	
	puts("Programa para demontrar Tomada de Decisao");
	
	printf("Digite o valor de X: ");
	scanf ("%d", &x);
	
	printf("Digite o valor de Y: ");
	scanf ("%d", &y);
	    if (x > y) // SE (...)
	         printf("O maior eh %d", x);
	    else if (y > x)
	            printf("O maior eh %d", y);
	        else 
	            printf("Os numeros digitados sao IGUAIS!!!");
	          	        
}
	         
	
	
	
	
	
	
