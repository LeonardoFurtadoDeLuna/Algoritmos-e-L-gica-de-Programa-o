/*
	Name: PesoMedioPopulacional
	Copyright: 
	Author: leonardo.furtado
	Date: 17/05/20 18:14
	Description: Algoritmo para calcular o peso médio de uma população
*/

# include <stdio.h>
# include <conio.h> 

main ()
{
	int cont;
	float peso, soma, media;
	soma = media = 0;
	peso = 1;
	cont = 0; 
	
	puts("Programa para calcular o peso medio da populacao\n ");
	
	while (peso !=0)
	{
		
	printf ("Informe seu peso em KG: ");
	scanf("%f", &peso);
	cont = cont + 1;
	soma = soma + peso;
	
    }
    
    cont = cont - 1;
    media = (float) soma/cont;
    puts("\n\nPrograma Encerrado!!!");
    printf("\nO peso medio populacional das %i pessoas que participaram do programa foi de %.2f KG.", cont, media);
    
	
}
