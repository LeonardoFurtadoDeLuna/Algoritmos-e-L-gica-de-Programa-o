/*
	Name: Lista4Questão4.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 09/07/20 15:38
	Description: Algoritmo que permite que o usuário faça uma consulta por meio de um número
	             para ver os valores salvos no vetor.
*/

# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <locale.h> //biblioteca de localizacao 

main ()

{
	setlocale(LC_ALL, "Portuguese"); 
	float vet [30]; //Declaração de variáveis do tipo vetor
	int i, consulta;
	
	consulta = 0;
	
	for(i = 0; i < 5; i++)
		vet[i] = 0;
	
	vet[0] = 15.26;
	vet[1] = 18.36;
	vet[2] = 269.23;
	vet[3] = 3.25;
	vet[4] = 4.39;
	vet[5] = 50.56;
	vet[6] = 669.21;
	vet[7] = 70.25;
	vet[8] = 8.14;
	vet[9] = 9.06;
	vet[10] = 11.23;
	vet[11] = 10.31;	
	vet[12] = 12.26;	
	vet[13] = 17.28;	
	vet[14] = 38.26;	
	vet[15] = 29.23;	
	vet[16] = 16.50;	
	vet[17] = 17.25;
	vet[18] = 18.78;	
	vet[19] = 19.90;	
	vet[20] = 2.80;	
	vet[21] = 2.61;	
	vet[22] = 22.74;	
	vet[23] = 23.05;
	vet[24] = 24.74;
	vet[19] = 89.25;	
	vet[20] = 20.39;	
	vet[21] = 9.01;	
	vet[22] = 2.92;	
	vet[23] = 2.03;
	vet[24] = 24.17;
	vet[25] = 25.74;	
	vet[26] = 26.87;	
	vet[27] = 27.25;	
	vet[28] = 2.36;
	vet[29] = 29.57;

  while(1)
    
  {
	printf("\nEscolha um número (índice do vetor) de 0 a 29 para consultar os "
	" valores salvos no vetor: ");
	scanf("%d", &consulta);
	
	switch(consulta)
	{
		case 0: printf("O número selecionado foi o 0 e o valor salvo é: %.2f\n", vet[0]);
		break;
		
		case 1: printf("O número selecionado foi o 1 e o valor salvo é: %.2f\n", vet[1]);
		break;
		
		case 2: printf("O número selecionado foi o 2 e o valor salvo é: %.2f\n", vet[2]);
		break;
		
		case 3: printf("O número selecionado foi o 3 e o valor salvo é: %.2f\n", vet[3]);
		break;
		
		case 4: printf("O número selecionado foi o 4 e o valor salvo é: %.2f\n", vet[4]);
		break;
		
		case 5: printf("O número selecionado foi o 5 e o valor salvo é: %.2f\n", vet[5]);
		break;
		
		case 6: printf("O número selecionado foi o 6 e o valor salvo é: %.2f\n", vet[6]);
		break;
		
		case 7: printf("O número selecionado foi o 7 e o valor salvo é: %.2f\n", vet[7]);
		break;
		
		case 8: printf("O número selecionado foi o 8 e o valor salvo é: %.2f\n", vet[8]);
		break;
		
		case 9: printf("O número selecionado foi o 9 e o valor salvo é: %.2f\n", vet[9]);
		break;
		
		case 10: printf("O número selecionado foi o 10 e o valor salvo é: %.2f\n", vet[10]);
		break;
		
		case 11: printf("O número selecionado foi o 11 e o valor salvo é: %.2f\n", vet[11]);
		break;
		
		case 12: printf("O número selecionado foi o 12 e o valor salvo é: %.2f\n", vet[12]);
		break;
		
		case 13: printf("O número selecionado foi o 13 e o valor salvo é: %.2f\n", vet[13]);
		break;
		
		case 14: printf("O número selecionado foi o 14 e o valor salvo é: %.2f\n", vet[14]);
		break;
		
		case 15: printf("O número selecionado foi o 15 e o valor salvo é: %.2f\n", vet[15]);
		break;
		
		case 16: printf("O número selecionado foi o 16 e o valor salvo é: %.2f\n", vet[16]);
		break;
		
		case 17: printf("O número selecionado foi o 17 e o valor salvo é: %.2f\n", vet[17]);
		break;
		
		case 18: printf("O número selecionado foi o 18 e o valor salvo é: %.2f\n", vet[18]);
		break;
		
		case 19: printf("O número selecionado foi o 19 e o valor salvo é: %.2f\n", vet[19]);
		break;
		
		case 20: printf("O número selecionado foi o 20 e o valor salvo é: %.2f\n", vet[20]);
		break;
		
		case 21: printf("O número selecionado foi o 21 e o valor salvo é: %.2f\n", vet[21]);
		break;
		
		case 22: printf("O número selecionado foi o 22 e o valor salvo é: %.2f\n", vet[22]);
		break;
		
		case 23: printf("O número selecionado foi o 23 e o valor salvo é: %.2f\n", vet[23]);
		break;
		
		case 24: printf("O número selecionado foi o 24 e o valor salvo é: %.2f\n", vet[24]);
		break;
		
		case 25: printf("O número selecionado foi o 25 e o valor salvo é: %.2f\n", vet[25]);
		break;
		
		case 26: printf("O número selecionado foi o 26 e o valor salvo é: %.2f\n", vet[26]);
		break;
		
		case 27: printf("O número selecionado foi o 27 e o valor salvo é: %.2f\n", vet[27]);
		break;
		
		case 28: printf("O número selecionado foi o 28 e o valor salvo é: %.2f\n", vet[28]);
		break;
		
		case 29: printf("O número selecionado foi o 29 e o valor salvo é: %.2f\n", vet[29]);
		break;
		
		case 30: exit(1);
		break;
		
	}//Fim do switch
	    
  }//Fim do while
	
}//Fim do programa
