/*
	Name: pedeNumero.c
	Copyright: 
	Author: leonardo.furtado
	Date: 15/05/20 11:21
	Description: Utilizar o la�o Enquanto...fa�a para demonstrar um loop
*/

/*
EXERCICIO: Solicita a idade do usuario at� uma idade inv�lida!!!
*/

# include <stdio.h>
# include <conio.h> 


main ()
{
	int idade = 1;
	while(idade != 0)
	{
		printf("\nDigite sua idade: ");
		scanf("%d", &idade);
		
		if(idade<=12)
		    printf(" - Crianca");
		else if(idade<=19)
		    printf (" - Adolescente");
		else if(idade<=60)
		    printf(" - Adulto");
		else 
		    printf(" - Idoso");
	}
	puts("\n\nprograma encerrado!!!");
	
	
	
}


