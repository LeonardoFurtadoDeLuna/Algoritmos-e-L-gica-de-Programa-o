/*
	Name: while.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 28/05/20 08:05
	Description: La�o de repeti��o While
*/


# include <stdio.h>
# include <conio.h> 

main ()

{  
   int contador1, contador2, contador3, i, num;
   contador1 = contador2 = num = 0;
   
//////////////////////////////////////////////////////////
   
//ENQUANTO FA�A = WHILE (QTD INDETERMINADA)
   
   while(contador1 < 3) //Enquanto
   {
   	contador1++;
   	puts("Ola, bom dia!!!");
   }
   
   
//////////////////////////////////////////////////////////

// REPITA AT� = DO WHILE

    do
    {
    	
   	puts("Ola, boa tarde!!!");
   	contador2++;	
    	
	}while(contador2 < 3);
	
	
////////////////////////////////////////////////////////


// PARA FA�A = FOR (QTD DERTEMINADA)
	
    printf("\nInforme um numero: ");
	scanf("%d", &num);
	
	for(i = 1; i <= 10; i++)
	{
		printf("\n%d x %d = %d", num, i, num*i);	
	}


} //Fim do programa
