/*
	Name: ClassificarIdade
	Copyright: 
	Author: leonardo.furtado
	Date: 13/05/20 22:18
	Description: Algoritmo para classificar a faixa etária
*/


# include <stdio.h>
# include <conio.h> 

main ()

{
	int idade;
	idade = 0;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	    if (idade<13)
	       printf("A classificacao da sua faixa etaria e: Crianca");
	    else if (idade<20)
	           printf("A classificacao da sua faixa etaria e: Adolescente");
	        else if (idade<61)
	               printf("A classificacao da sua faixa etaria e: Adulto");
	               else 
				       printf("A classificacao da sua faixa etaria e: Idoso");
	               
}
	    

