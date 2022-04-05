/*
	Name: CalculareClassificarIMC
	Copyright: 
	Author: leonardo.furtado
	Date: 13/05/20 22:18
	Description: Algoritmo para calcular e classificar um IMC de uma pessoa
*/


# include <stdio.h>
# include <conio.h> 

int main ()

{
	float altura, peso, imc;
	altura = peso = imc = 0;
	
	puts("Programa para calcular e classificar o IMC");
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	imc = (float) peso/(altura*altura);
	printf("Seu IMC e de: %.2f",imc);
	
	if (imc < 16)
	    printf("\nA classificacao do seu IMC e: Magreza grave");
	    else if (imc <17)
	             printf("\nA classificacao do seu IMC e: Magreza moderada");
	         else if (imc<18.5)
			          printf ("\nA classificacao do seu IMC e: Magreza leve");
			      else if (imc<25)
			               printf ("\nA classificacao do seu IMC e: Saudavel");
			           else if (imc<30)
			                    printf ("\nA classificacao do seu IMC e: Sobrepeso");
			                else if (imc<35)
			                         printf("\nA classificacao do seu IMC e: Obesidade Grau I");
			                     else if (imc<40)
			                              printf("\nA classificacao do seu IMC e: Obesidade Grau II (Considerada Severa)");
			                          else
			                              printf("\nA classificacao do seu IMC e: Obesidade Grau III (Considerada Mobida)");



}
