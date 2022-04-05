/*
	Name: P2Quest�o2.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 10/07/20 12:03
	Description: Algoritmo que l� n numeros inteiros positivos 
	             e calcula a m�dia dos n�meros pares.
*/

# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <locale.h> //biblioteca de localizacao 

main ()

{
	setlocale(LC_ALL, "Portuguese"); 
	
	int num, quoc, resto, soma, cont, par[15];
	float media;
	
	num = quoc = resto = soma = cont = 0;
	media = 0.0;
	
	for(cont=0; cont<12; cont++)
	{
		par[cont] = 0;
	}//Fim do for
    
    puts("PROGRAMA PARA A LEITURA DE N�MEROS INTEIROS POSITIVOS\n");
    
    cont = 0;
    
  while(1)
  {
    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &num);
    
    quoc = num/2;
    resto = num-(quoc*2);
    
    if(num<0)
    {
     printf("Voc� digitou um n�mero negativo, digite apenas n�meros POSITIVOS!!!\n");	
	}
	else if (resto==0)
	{
	   soma = soma + num;
	   par[cont] = num;
	   cont++;
	}//Fim do primeiro IF/Else
	  
	 /*Dados a serem apresentados ao usu�rio ap�s a digita��o de 15
	 n�meros pares*/
	  
    if(cont==15)
    {
        media = (float) soma/cont;
        puts("\n=============================================="
	         "\n\nPROGRAMA FINALIZADO!!!");
	         
        printf("\n- Os n�meros pares informados foram: \n");
        for(cont=0; cont<15; cont++)
	    {
		    printf("%d ", par[cont]);
	    }//Fim do for
	    printf("\n- A m�dia dos 15 n�meros pares informados � de %.2f\n", media);
	
        if (media<15.00)
            {
           	 printf("- Classifica��o: ABAIXO DA M�DIA\n");
             exit(cont==15);
		    }
        else if (media<50.00)
            {
             printf("- Classifica��o: DENTRO DO ESPERADO\n");
             exit(cont==15);
            }
        else
            {
             printf("- Classifica��o: ACIMA DA M�DIA\n");
             exit(cont==15);
		    }//Fim do If/Else interno do segundo If/Else   
	
    }//Fim do segundo If/Else
    
  }//Fim do while       
        
}//Fim do programa

