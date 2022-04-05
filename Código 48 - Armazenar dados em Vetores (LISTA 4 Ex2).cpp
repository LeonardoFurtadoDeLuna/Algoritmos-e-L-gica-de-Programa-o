/*
	Name: Lista4Questão2.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 09/07/20 15:38
	Description: Algoritmo para ler sexo, altura e idade de 10 pessoas
	             e armazenar em estruturas multivalorizadas
*/

#include <conio.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

main()

{
    
    setlocale(LC_ALL,"portuguese");
    
    int  idade[10], cont;
    char sexo[10];
    float altura[10];
    
    cont = 0;
    
    while(cont < 10)
    {
    printf("\nDigite seu sexo com M/F: ");
    scanf(" %c", &sexo[cont]);
    printf("Digite sua idade: ");
    scanf(" %d", &idade[cont]);
    printf("Digite sua altura: ");
    scanf(" %f", &altura[cont]);
    cont++;
    }//Fim do While
    
    cont=0;
    while(cont < 10 )
	{
    
    puts("\n Os Dados são:");
    printf("\n idade: %d, \naltura: %f, \nsexo: %c ", idade[cont], altura[cont], sexo[cont]);
    
   cont++;
}   
    
}//Fim do programa
