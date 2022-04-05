/*
	Name: EscolhaIfElse.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 19/06/20 10:36
	Description: Múltipla escolha com IF e Else
*/

# include <stdio.h>
# include <stdlib.h> 
# include <conio.h> 

main()

{
	int i, num;
	num = 0;
	
  while(1)
   {
	printf("\nDigite um numero (0 para finalizar!!!): ");
	scanf("%d", &num);
	
	if (num == 1)
	    puts("Voce digitou o numero UM");
	    
	else if (num == 2)
	    {
	    num = num * 4;
		printf("Resultado: %d", num);
		}
		
	else if (num == 3)
	    puts("TRES foi o numero que voce digitou");
	   
	else if (num == 4)
	   {
	   	for(i = 0; i<10; i++)
		    {
		         printf("\n%d", num-i);
			}
	   }
	   
	else if (num == 0)
	   {
	   	puts("Fim do programa!!!");
	   	exit(1);
	   }
	else
	   {
	   	puts("Voce nao digitou nem 1, 2, 3 ou 4");
	   }
  }//Fim do while
	
	   
}//Fim do programa
