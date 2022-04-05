/*
	Name: CorrecaoQuestao2.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 05/06/20 09:21
	Description: Programa para ler a temperatura de uma pessoa e classificar de acordo com a tabela da OMS
	
*/

# include <stdio.h>
# include <conio.h> 

main ()

{
	float temp = 0.0;
	
	printf("Digite sua temperatura: ");
	scanf("%f", &temp);
	
	if(temp < 36.0) //Prof vai explicar depois a função: switch...case
	   puts("Hipotemia");
	else if (temp <= 37.8)
	   puts("Temperatura Normal");
	else if (temp <= 39.5)
	   puts("Febre");
	else if (temp <= 41.0)
	   puts("Febre Alta");
	else if (temp > 41.0)
	   puts("Hipertemia");
	   
	
	
	
	

}
