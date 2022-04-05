/*
	Name: P2Questão3.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 10/07/20 12:03
	Description: Algoritmo para calcular o peso medio de homens e mulheres
	             utilizando estruturas multivaloradas.
*/

# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <locale.h> //biblioteca de localizacao 

main ()

{
	setlocale(LC_ALL, "Portuguese"); 
	
	int m, f, cont;
	float peso[12], somaM, somaF, mediaM, mediaF;
	char sexo[12];
	
	m = f = cont = 0;
	mediaM = mediaF = somaM = somaF = 0.0;

	for(cont=0; cont<12; cont++)
	{
		peso[cont] = 0.0;
		sexo[cont] = ' ';
	}//Fim do for
	
	puts("PROGRAMA DE CONSULTA DE PESO POPULACIONAL");
	
	cont = 0;
	while(cont!=12)
	{
		
	printf("\n%d° - Informe o seu sexo (M ou F): ", cont+1);
	scanf(" %c", &sexo[cont]);
	
		if(sexo[cont] == 'm' ||sexo[cont] == 'M')
	    {
		   printf("Informe o seu peso: ");
	       scanf("%f", &peso[cont]);	
	       
	       somaM = (float) somaM + peso[cont];
	       m++;
	    }
	    else if(sexo[cont] == 'f' || sexo[cont] == 'F')
	    {
	       printf("Informe o seu peso: ");
	       scanf("%f", &peso[cont]);	
	      	
	       somaF = (float) somaF + peso[cont];
	       f++;
		}
		else
		{
			printf("Sexo informado inválido!!!\n");
			cont--;
		}//Fim do If/Else
	
	cont++;
	
	}//Fim do while
	
	puts("\n=============================================="
	"\n\nPROGRAMA DE CONSULTA DE PESO POPULACIONAL FINALIZADO!!!");
	
	mediaM = (float) somaM/m;
	mediaF = (float) somaF/f;
	
	printf("\n- A pesquisa teve a participação de %d pessoas, sendo "
	"%d homem(ns) e %d mulher(es)", cont, m, f);
	
	if(m == 0)
	{
		printf("\n- O peso médio das mulheres foi de: %.2f\n", mediaF);
	}  
	else if (f == 0)
	{
		printf("\n- O peso médio dos homens foi de: %.2f\n", mediaM);
	}
	else
	{
		printf("\n- O peso médio dos homens foi de: %.2f", mediaM);
		printf("\n- O peso médio das mulheres foi de: %.2f\n", mediaF);	
	}//Fim do If/Else
	
	for(cont=0; cont<12; cont++)
	{
		printf("\n%d° - %.2f %c ", cont+1, peso[cont], sexo[cont]);
	}//Fim do for
	
}//Fim do programa


