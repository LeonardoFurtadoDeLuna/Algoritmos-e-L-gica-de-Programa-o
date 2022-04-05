/*
	Name: 
	Copyright: 
	Author: leonardo.furtado
	Date: 22/05/20 08:39
	Description: 
*/


# include <stdio.h>
# include <conio.h> 

main ()

{
	int temp, tempNeg;
	temp = tempNeg = 0;
	
	printf("Digite uma temperatura positiva: ");
	scanf("%i", &temp);
	
	tempNeg = temp * -1;
	
	do 
	{
		printf("\n%d", temp);
		temp--;
		
	}while(temp >= tempNeg); 
	
	getch ();
	
	
	
	
	
	
}

