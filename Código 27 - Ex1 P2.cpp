/*
	Name: P2Questão1.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 09/07/20 15:38
	Description: Algoritmo que permite que o usuário escolha as opções de um menu
	             de uma pizzaria.
*/

# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <locale.h> //biblioteca de localizacao 

main ()

{
	setlocale(LC_ALL, "Portuguese"); 
	
	int opcao;
	float total;
	
	total = 0.0;
	
  	while (1)
  {
    opcao = 0;
  	system("cls"); //Executa um comando dd Sistema Operacional (windows/DOS) 
	               //(MS-DOS - Microsoft - Disk Operation System
	              //cls = ClearScreen (Limpa a tela)
	
    puts("BEM VINDO A PIZZARIA DELLA ITÁLIA! ESCOLHA O SEU PEDIDO NO MENU: "
	    "\n\n                          MENU DE OPÇÕES                              \n"
	    "\n1 - Pizza de Mussarela............................................R$ 28,50"
	    "\n2 - Pizza de Calabresa............................................R$ 30,00"                  
	    "\n3 - Pizza de Frango com Catupiry..................................R$ 42,00"        
	    "\n4 - Pizza Portuguesa..............................................R$ 40,00" 
		"\n12 - Meia Pizza de Mussarela com Calabresa........................R$ 32,00"        
		"\n13 - Meia Pizza de Mussarela com Frango com Catupiry..............R$ 38,00"
		"\n14 - Meia Pizza de Mussarela com Portuguesa.......................R$ 39,00"   
		"\n23 - Meia Pizza de Calabresa com Frango com Catupiry..............R$ 40,50"
		"\n24 - Meia Pizza de Calabresa com Portuguesa.......................R$ 39,00"
		"\n34 - Meia Pizza de Frango com Catupiry com Portuguesa.............R$ 45,65"     
	    "\n5 - Refrigerante COCA COLA........................................R$ 10,00"
	    "\n0 - Sair...\n"
		"================================================================================\n");
	
	printf("- Informe uma das opções desejadas no menu: ");
	scanf("%d", &opcao);
	
	switch(opcao)
	{
		case 1: printf("A opção selecionada foi: PIZZA DE MUSSARELA"
		        " no valor de R$ 28,50");
		        total = (float) total + 28.50;
		        break;
		
		case 2: printf("A opção selecionada foi: PIZZA DE CALABRESA"
		        " no valor de R$ 30,00");
		        total = (float) total + 30.00;
		        break;
		
		case 3: printf("A opção selecionada foi: PIZZA DE FRANGO COM CATUPIRY"
		        " no valor de R$ 42.00");
	        	total = (float) total + 42.00;
		        break;
		
		case 4: printf("A opção selecionada foi: PIZZA DE PORTUGUESA"
		        " no valor de R$ 40,00");
		        total = (float) total + 40.00;
		        break;
		
		case 5: printf("A opção selecionada foi: REFRIGERANTE COCA COLA"
		        " no valor de R$ 10,00");
		        total = (float) total + 10.00;
		        break;
		
		case 12: printf("A opção selecionada foi: MEIA PIZZA DE MUSSARELA COM"
		         " CALABRESA no valor de R$ 32,00");
		         total = (float) total + 32.00;
		         break;
		         
		case 13: printf("A opção selecionada foi: MEIA PIZZA DE MUSSARELA COM"
		         " FRANGO COM CATUPIRY no valor de R$ 38,00");
		         total = (float) total + 38.00;
		         break;
		         
		case 14: printf("A opção selecionada foi: MEIA PIZZA DE MUSSARELA COM"
		         " PORTUGUESA no valor de R$ 39,00");
		         total = (float) total + 39.00;
		         break;
		         
		case 23: printf("A opção selecionada foi: MEIA PIZZA DE CALABRESA COM"
		         " FRANGO COM CATUPIRY no valor de R$ 40,50");
		         total = (float) total + 40.50;
		         break;
		         
		case 24: printf("A opção selecionada foi: MEIA PIZZA DE CALABRESA COM"
		         " PORTUGUESA no valor de R$ 39,00");
		         total = (float) total + 39.00;
		         break;
		         
		case 34: printf("A opção selecionada foi: MEIA PIZZA DE FRANGO COM CATUPIRY COM"
		         " PORTUGUESA no valor de R$ 45,65");
		         total = (float) total + 45.65;
		         break;
		
		case 0: printf("\nO total da sua compra na Pizzaria Della Itália de acordo "
		"com suas escolhas é de: R$ %.2f\n", total);
		        exit(1);
		        break;
		
		default: puts("VOCÊ NÃO DIGITOU NENHUMA DAS OPÇÕES DO MENU, TENTE NOVAMENTE!!!"); 
		//É qualquer outro valor que foi digitado que não está presente no menu.
		         break;
		
	}//Fim do switch
	
	puts("\n\nPressione qualquer tecla para continuar...");
	getch();

  }//Fim do While
	
}//Fim do Programa
