/*
	Name: Multipla.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 15/05/20 11:00
	Description: Uso da estrutura "switch...case" para múltipla escolha
*/

# include <stdio.h>
# include <stdlib.h> 
# include <conio.h> 


main ()

{
	int num, i;
	num = 0;
	
  while(1)
  {
	printf("Digite um numero: (0 para finalizar) ");
	scanf("%d", &num);
	
	switch(num)
	{
		case 1: puts("Voce digitou o numero UM");
		        break;
		
		case 2: num = num * 4;
		        printf("Resultado: %d", num);
		        break;
		
		case 3: puts("\nTRES foi o numero que voce digitou");
		        break; //O break cai fora da estrutura
		        
		case 4: for(i = 0; i<10; i++)
		        {
		         printf("\n%d", num-i);
				}
				break;
				
		case 0: exit(1);
		
		default: puts("Voce nao digitou nem 1, 2, 3 ou 4"); //É qualquer outro valor que foi digitado, última opcao
		         break;
		        	
	}//Fim do switch
	
	puts("\n\n\nFim do switch..."); //Quando poe o break ele cai aqui
	
   }//Fim do while

}//Fim do programa
