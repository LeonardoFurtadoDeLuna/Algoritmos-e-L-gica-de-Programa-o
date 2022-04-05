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
	int cont = 0;
	float peso, pesoAcumulado, pesoMedio;
	
	peso = 0.1;
	cont = 0; 
	
	puts("Programa para calcular o peso medio da populacao\n ");
	
	while (true) // true - Verdadeiro
	{
		
	printf ("Digite seu peso: ");
	scanf("%f", &peso);
	    if (peso == 0)
	    break;
	    
	
	pesoAcumulado = pesoAcumulado + peso;
	cont = cont + 1; // Ou pode ser com: "cont++"
	
    } //fim do while
    
    //cont = cont - 1; // cont--;
    pesoMedio = (pesoAcumulado/cont);
    printf("\nO peso medio populacional eh: %.3f", pesoMedio);
    printf("\nQtde de pessoas na pesquisa: %i", cont);
	
    getch ();  
} // Fim do programa
