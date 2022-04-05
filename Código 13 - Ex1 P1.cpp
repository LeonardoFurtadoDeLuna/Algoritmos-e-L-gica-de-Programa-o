/*
	Name: 
	Copyright: 
	Author: leonardo.furtado
	Date: 29/05/20 08:52
	Description: Algoritmo para ler um número e realizar um racicínio
*/


# include <stdio.h>
# include <conio.h> 

main ()

{  
    int div, quoc, resto, pot, cont;
    div = quoc = resto = cont = 0;
    pot = 1;
    

    printf("Digite um numero: ");
    scanf("%d", &div);
   
    quoc = div/2;
    resto = div - (quoc*2);
   
    if(div == 0)
        printf("Voce digitou zero");
    else if(resto == 0)
        {  while(cont < 3)
           {
             cont++;
   	         pot = div * pot;
            }
          printf("O numero digitado e par e o resultado da operacao e: %d", pot);  
		}
        
    else
        printf("O numero digitado e impar e o resultado da operacao e: %d", div * (div*2));
        

} //Fim do programa
