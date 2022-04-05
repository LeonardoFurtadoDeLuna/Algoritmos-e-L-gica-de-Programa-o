/*
	Name: TemperaturaDecrescente
	Copyright: 
	Author: leonardo.furtado
	Date: 15/05/20 21:35
	Description: Algoritmo que ler a temperatura em Celcius e exibi de forma decrescente até atingir o mesmo número só que negativo.
*/

# include <stdio.h>
# include <conio.h> 


main ()
{

    float temp, tempNeg;
	temp = tempNeg = 0;
	
	printf("Digite uma temperatura positiva: ");
	scanf("%f", &temp);
	
	tempNeg = temp * -1;
	
	do 
	{
		printf("\n%.2f", temp);
		temp--;
		
	}while(temp >= tempNeg); 
	
	getch ();
    
}
