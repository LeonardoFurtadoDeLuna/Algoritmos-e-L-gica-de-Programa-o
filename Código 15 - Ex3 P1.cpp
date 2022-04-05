/*
	Name: 
	Copyright: 
	Author: leonardo.furtado
	Date: 29/05/20 08:52
	Description: Algoritmo para calcular o percentual das faces de um dado.
*/


# include <stdio.h>
# include <conio.h> 

main ()

{  int face, cont, n1, n2, n3, n4, n5, n6;
   float p1, p2, p3, p4, p5, p6;
   
   face = 0;
   p1 = p2 = p3 = p4 = p5 = p6 = 0;
   n1 = n2 = n3 = n4 = n5 = n6 = 0;
   
   for(cont = 0; cont < 100; cont++)
	{
		printf("Informe o numero da face do dado: ");	
		scanf("%d", &face);
		
		if (face == 1)
		    n1++;
		else if (face == 2)
		    n2++;
		else if (face == 3)
		    n3++;
		else if (face == 4)
		    n4++;
		else if (face == 5)
		    n5++;
		else if (face == 6)
		    n6++;
		else
		    printf("Numero da face informado invalido\n");
		    
    } //Fim do for 
    
	p1 = (float) n1/100;
	p2 = (float) n2/100;
	p3 = (float) n3/100;
	p4 = (float) n4/100;
	p5 = (float) n5/100;
	p6 = (float) n6/100;
	
	printf("\nO percetual de faces de acordo com os dados informados que cairam no numero 1, 2, 3, 4, 5, 6 sao respectivamente %.2f, %.2f, %.2f, %.2f, %.2f e %.2f por cento.",p1*100,p2*100,p3*100,p4*100,p5*100, p6*100);
		

} //Fim do programa
