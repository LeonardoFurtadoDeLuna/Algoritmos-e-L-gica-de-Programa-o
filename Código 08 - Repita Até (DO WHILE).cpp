/*
	Name: lacoRepitaAte
	Copyright: 
	Author: leonardo.furtado
	Date: 15/05/20 08:37
	Description: Implementa��o do la�o de repeti��o "Repita...At�"
*/


# include <stdio.h>
# include <conio.h> 

//Escopo
//int b; vari�vel gobal antes em cima do main, atinge tudo o que tem depois do main

main ()
{	
	int num, cont; //vari�vel local
	num = cont = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	do //repeat
	{
	    printf("Aluno Fatec");
		cont = cont + 1;	//E a mesma coisa que cont++
		
    }while(cont<num); //condi��o de parada
	//until
	
	
}

