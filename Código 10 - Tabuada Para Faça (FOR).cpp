/*
	Name: 
	Copyright: 
	Author: 
	Date: 15/05/20 10:55
	Description: Tabuada com o for
*/

# include <stdio.h>
# include <conio.h> 


main ()
{
	int num, i;
	num = 0;
	i = 1;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	
	for(i = 1;i<11;i++)
	
	    printf("\n%d x %d = %d", num, i, num*i);
	    
}
