/*
	Name: SimNao.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 23/05/20 18:39
	Description: Programa que indentifique uma resposta do tipo de texto
	             "character" - char
*/

# include <stdio.h>
# include <conio.h> 

main ()

{ 
    char resp; int idade;
    resp = ' '; idade = 0;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    //String = sequência de caracteres
    printf("Voce passou bem este ultimo fim de semana: ");
    scanf(" %c", &resp); //Macete de profissional
       
        if(resp == 'S' || resp == 's')
           puts ("Que bom seu fds foi otimo!!!"); //puts tem o s de string, para texto
        else
           puts("Puxa, que pena que nao foi...");
    

   printf("\nVoce respondeu: %c", resp);
   printf("\nVoce respondeu: %d", resp);



}

