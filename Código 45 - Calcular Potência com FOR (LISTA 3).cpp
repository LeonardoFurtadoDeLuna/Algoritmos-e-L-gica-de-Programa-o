/*
	Name: BaseElevadoAltura
	Copyright: 
	Author: leonardo.furtado
	Date: 23/05/20 18:39
	Description: Calcular a base elevado pela altura.
*/

# include <stdio.h>
# include <conio.h> 

main ()

{ 
   int a, b, cont, res;
   a = b = cont = 0;
   res = 1;
   
   printf("Digite o numero base: ");
   scanf("%d", &b);
   
   printf("Digite o numero altura: ");
   scanf("%d", &a);
   
   for(cont = 0; cont != a; cont++)
   {
   	res = b * res;
   }
   
   printf("O resultado da base elevado a altura e de: %d", res);
   
}//Fim do programa
   
