/*
	Name: ImcParaFaca
	Copyright: 
	Author: leonardo.furtado
	Date: 16/05/20 15:05
	Description: Algoritmo para calcular e classificar IMC de 10 pessoas
*/


# include <stdio.h>
# include <conio.h> 

main ()

{
	int cont;
	float altura, peso, imc;
	altura = peso = imc = 0;
	
	puts("Programa para calcular e classificar o IMC");
	
	for (cont = 0;cont < 2; cont++)
	{
	
	printf("\nDigite seu peso: ");
	scanf("%f", &peso);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	imc = (float) peso/(altura*altura);
	printf("Seu IMC e de: %.2f",imc);
	
    if (imc<16)
	    printf("\nA classificacao do seu IMC e: Magreza Grave\n");	 
	else if (imc<17)
		printf("\nA classificacao do seu IMC e: Magreza Moderada\n");
	else if (imc<18.5)
		printf("\nA classificacao do seu IMC e: Magreza Leve\n");
	else if (imc<25)
    	printf("\nA classificacao do seu IMC e: Saudavel\n");
	else if (imc<30)
		printf("\nA classificacao do seu IMC e: Sobrepeso\n");
	else if (imc<35)
	    printf("\nA classificacao do seu IMC e: Obesidade Grau I\n");	
	else if (imc<40)
		printf("\nA classificacao do seu IMC e: Obesidade Grau II Severa\n");
	else
		printf("\nA classificacao do seu IMC e: Obesidade Grau III Mobida\n");
	
	}
	
	puts("\n\nPrograma encerrado!!!");
	
}
