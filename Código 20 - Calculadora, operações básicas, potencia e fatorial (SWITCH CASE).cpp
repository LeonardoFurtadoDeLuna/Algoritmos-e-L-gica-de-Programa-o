/*
	Name: AtividadeCalculadora.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 19/06/20 11:04
	Description: Calculadora que executa as 4 operações básicas, fatoração e potenciação
*/


# include <stdio.h>
# include <stdlib.h> 
# include <conio.h> 
# include <math.h>

main ()

{
	int opcao, num1, num2, pot;
	num1 = num2 = opcao = pot = 0;
	
	puts("*CALCULADORA DE NUMEROS INTEIROS*");
	printf("\nEscolha uma opcao:");
	puts("\n\n1 - Adicao");
	puts("2 - Subtracao");
	puts("3 - Multiplicacao");
	puts("4 - Divisao");
	puts("5 - Potenciacao");
	puts("6 - Fatoracao");
	puts("0 - Para finalizar o programa");
	
  while(1)
  {
  	printf("\nInforme a opcao desejada: ");
	scanf("%d", &opcao);
	switch(opcao)
	{
		case 1: puts("\n- A opcao selecionada foi ADICAO");
		        printf("Digite a primeira parcela: ");
		        scanf("%d", &num1);
		        printf("Digite a segunda parcela: ");
		        scanf("%d", &num2);
		        printf("O resultado da operacao %d + %d e igual a %d\n", num1, num2, num1+num2);
		        break;
				
		case 2: puts("\n- A opcao selecionada foi SUBTRACAO");
		        printf("Digite o minuendo: ");
		        scanf("%d", &num1);
		        printf("Digite o subtraendo: ");
		        scanf("%d", &num2);
		        printf("O resultado da operacao %d - %d e igual a %d\n", num1, num2, num1-num2);
		        break;
				
		case 3: puts("\n- A opcao selecionada foi MULTIPLICACAO");
		        printf("Digite o multiplicando: ");
		        scanf("%d", &num1);
		        printf("Digite o multiplicador: ");
		        scanf("%d", &num2);
		        printf("O resultado da operacao %d x %d e igual a %d\n", num1, num2, num1*num2);
		        break;
				
		case 4: puts("\n- A opcao selecionada foi DIVISAO");
		        printf("Digite o dividendo: ");
		        scanf("%d", &num1);
		        printf("Digite o divisor: ");
		        scanf("%d", &num2);
		        printf("O resultado da operacao %d / %d e igual a %.2f\n", num1, num2, (float) num1/num2);
		        break;
				
		case 5: puts("\n- A opcao selecionada foi POTENCIACAO");
		        printf("Digite a base: ");
		        scanf("%d", &num1);
		        printf("Digite o expoente: ");
		        scanf("%d", &num2);
		        pot = pow(num1,num2);
		        printf("O resultado do %d elevado a %d e igual a %d\n", num1, num2, pot);
		        break;
				
		case 6: puts("\n- A opcao selecionada foi FATORACAO");
		        printf("Digite o numero a ser fatorado: ");
		        scanf("%d", &num1);
		        num2 = num1;
		        printf ("O resultado da fatoracao e igual a %d! = %d", num1, num1);
		        do 
	               {
		            num1--;
	              	printf(" x %d", num1);
		            num2 = num2 * num1;
	               }while (num1 > 1); 
	                printf(" = %d\n", num2);
	            break;
	            
	    case 0: puts("\nPrograma Finalizado!!!");
	            exit(1);
	            
	            
		        
		default: puts("Voce nao digitou nenhuma das opcoes listadas anteriormente, tente novamente!"); 
		         break;
		        
    }//Fim do switch
    
  }//Fim do while
    
}//Fim do programa
