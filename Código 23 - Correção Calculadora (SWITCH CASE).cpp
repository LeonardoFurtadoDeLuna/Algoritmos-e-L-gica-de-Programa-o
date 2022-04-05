/*
	Name: CorrecaoCalculadora.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 19/06/20 11:04
	Description: Programa para fazer uma calculadora utilizando a estrutura
	             switch... case
*/

# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <locale.h> //biblioteca de localizacao
# include <math.h> //biblioteca para funções aritméticas


main ()

{
	setlocale(LC_ALL, "Portuguese"); 
	//Configura o layoute de caracteres entrada e saída
	//Obs.: os números decimais tem que por virgula e não mais ponto
	//setlocale(LC_ALL, "Defaut"); Para parar de por acento, confirmar a escrita defaut
	
	int opc; //Variável *opc* que será dentro da estrutura switch
	

  while(1)
  {
  	opc = 0;
  	system("cls"); //Executa um comando dd Sistema Operacional (windows/DOS) 
	               //(MS-DOS - Microsoft - Disk Operation System
	              //cls = ClearScreen (Limpa a tela)
	
	puts("Calculadora em C");
	puts("==================================================");
	
	puts("Menu de opcoes: "
	    "\n----------------"
	    "\n1 - Adição"
	    "\n2 - Subtração"
	    "\n3 - Multiplicação"
	    "\n4 - Divisão"
	    "\n5 - Potenciação"
	    "\n6 - Fatorial"
	    "\n7 - Raiz Quadrada"
	    "\n0 - Sair..."
		"\n----------------");
	
	printf("Digite sua opção: ");
	scanf("%d", &opc);
	
	int num1, num2;
	float result;
	
	num1 = num2 = 0;
	result = 0.0;
	
	switch(opc)
	{
		case 1: printf("Digite um número: ");
		        scanf("%d", &num1);
		        printf("Digite um número: ");
		        scanf("%d", &num2);
		        result = num1+num2;
		        break;
		 
		case 2: printf("Digite um número: ");
		        scanf("%d", &num1);
		        printf("Digite um número: ");
		        scanf("%d", &num2);
		        result = num1 - num2;
		        break;
				
		case 3: printf("Digite um número: ");
		        scanf("%d", &num1);
		        printf("Digite um número: ");
		        scanf("%d", &num2);
		        result = num1 * num2;  	 
		        break;
		        
		case 4: printf("Digite um número: ");
		        scanf("%d", &num1);
		        printf("Digite um número: ");
		        scanf("%d", &num2);
		        result = (float) num1 / num2;  	 
		        break;
		        
		case 5: printf("Digite a base: ");
		        scanf("%d", &num1);
		        printf("Digite o expoente: ");
		        scanf("%d", &num2);
		        result = pow(num1, num2);
		        
		        /* Obs.: Não funcionou essa parte, ajeitar para executar a potencia
		        result = 1;
		        for (int i = 0; i < num2; i++)
		            result = result * num1;	 
		        */
		        break;
		        
		case 6: printf("Digite o número para calcular seu fatorial: ");
		        scanf("%d", &num1);
		        
		        result = 1;
		        for(int i = num1; i>0; i--)
		        {
		            result = result * num1;
		            num1 = num1 - 1;
		        }     
		        break;
		        
		case 7: printf("Digite um número para calcular sua raiz quadrada: ");
		        scanf("%d", &num1);
		        result = sqrt(num1); //square root
		        break;
		        
		case 0: exit(1);
		        break;	   
		
	}//Fim do switch
	
	printf("\nO resultado da operação é %.2f\n", result);	
	
	//system("pause");
	
	puts("Pressione qualquer tecla para continuar...");
	getch();
	
	/*
	int tecla = 0;
	tecla = getch(); // get character Significa pegar *get* e caracter *ch*
	printf("Tecla digitada foi %c que é representada pelo número: %d", tecla, tecla);
	
	if (tecla == 27)
	    puts("Você apertou ESC");
	else if (tecla == 13)
	    puts ("Você apertou ENTER");
	else
	    puts ("Você teclou qualquer outra coisa...");
	getch();
	*/
	
  }//Fim do While
	
	
	
} //Fim do programa
