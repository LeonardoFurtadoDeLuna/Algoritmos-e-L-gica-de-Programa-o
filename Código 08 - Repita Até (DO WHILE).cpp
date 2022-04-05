/*
	Name: lacoRepitaAte
	Copyright: 
	Author: leonardo.furtado
	Date: 15/05/20 08:37
	Description: Implementação do laço de repetição "Repita...Até"
*/


# include <stdio.h>
# include <conio.h> 

//Escopo
//int b; variável gobal antes em cima do main, atinge tudo o que tem depois do main

main ()
{	
	int num, cont; //variável local
	num = cont = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	do //repeat
	{
	    printf("Aluno Fatec");
		cont = cont + 1;	//E a mesma coisa que cont++
		
    }while(cont<num); //condição de parada
	//until
	
	
}

