/*
	Name: ClassificarIdadeDoWhile
	Copyright: 
	Author: leonardo.furtado
	Date: 23/05/20 15:12
	Description: Algoritmo para classificar a faixa etária de um número indeterminado 
	             de pessoas e a média de cada faixa etária.
*/

# include <stdio.h>
# include <conio.h> 

main ()
{
	int idade, s1, s2, s3, s4, cont1, cont2, cont3, cont4;
	float m1, m2, m3, m4;
	
	idade = s1 = s2 = s3 = s4 = cont1 = cont2 = cont3 = cont4 = 0;
	m1 = m2 = m3 = m4 = 0.0;
	
	do 
	{
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if (idade<13)
	    {
		printf("A classificacao da sua faixa etaria e: Crianca\n\n");
	    s1 = s1 + idade;
	    cont1++;
	    m1 = (float) s1/(cont1);
		}
	else if (idade<20)
	    {
		printf("A classificacao da sua faixa etaria e: Adolescente\n\n");
	    s2 = s2 + idade;
	    cont2++;
	    m2 = (float) s2/cont2;
		}
	else if (idade<61)
	    {
		printf("A classificacao da sua faixa etaria e: Adulto\n\n");
	    s3 = s3 + idade;
	    cont3++;
	    m3 = (float) s3/cont3;
		}
	else 
	    {
		printf("A classificacao da sua faixa etaria e: Idoso\n\n");
		s4 = s4 + idade;
	    cont4++;
	    m4 = (float) s4/cont4;
	    }
			
	}while(idade!=0);
	
	printf("\nA faixa etaria crianca teve a media de %.1f anos", m1);
	printf("\nA faixa etaria adolescente teve a media de %.1f anos", m2);
	printf("\nA faixa etaria adulto teve a media de %.1f anos", m3);
	printf("\nA faixa etaria idoso teve a media de %.1f anos", m4);	
	
} //Fim do programa
