/*  
    Name: TomadaDecisao2.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 13/05/20 15:40
	Description: Programa para demonstrar a estrutura lógica para a tomada de descisão 2
*/

# include <stdio.h>
# include <conio.h>

main ()

{
	int x, y; 
	float result;
	
	x = y = 0;
	result = 0;
	
	puts("Programa para calculos diferentes em Tomada de Decisao 2: ");
	
	printf("Digite o valor de X: "); scanf ("%d", &x);
	printf("Digite o valor de Y: "); scanf ("%d", &y);
	
	if (x>y)
	{
		result = x*x;
	    printf("%d elevado ao quadrado eh: %.f", x, result); //5 elevado ao quadrado eh: 25
	}   
	else if (x<y)
	{
		result = (float) y/2;
		printf("%d dividido por 2 eh: %.2f", y, result); //8 dividido por 2 eh: 4
	}
	else 
	    puts ("Os numeros sao IGUAIS!!!");
	    
	
}
