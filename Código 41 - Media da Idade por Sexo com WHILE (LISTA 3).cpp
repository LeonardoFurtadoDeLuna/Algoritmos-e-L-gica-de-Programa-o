/*
	Name: MediaIdadePorSexo
	Copyright: 
	Author: leonardo.furtado
	Date: 23/05/20 13:50
	Description: Algoritmo para ler idade e calcular a idade média de acordo com o sexo.
*/

# include <stdio.h>
# include <conio.h> 

main ()

{ 
   int idadeF, idadeM, cont, contF, contM, somaF, somaM;
   float mediaM, mediaF;
   char sexo;
   
   idadeF = idadeM = cont = contM = contF = somaF = somaM = 0;
   mediaM = mediaF = 0.0;
   sexo = ' ';
   
   while (cont != 10)
   {    
        
   	    printf("\nInforme seu sexo (M ou F): ");
        scanf(" %c", &sexo);
        
        if (sexo == 'f' || sexo == 'F')
            {
			printf("Informe sua idade: ");
            scanf("%d", &idadeF);
            contF++;
           	somaF = somaF + idadeF;
           	mediaF = (float) somaF/contF;
			}
		else if (sexo == 'm' || sexo == 'M')
		    {
		    contM++;
		    printf("Informe sua idade: ");
            scanf("%d", &idadeM);
			somaM = somaM + idadeM;
           	mediaM = (float) somaM/contM;
		    }
		else 
		    {
		    printf("Sexo informado invalido!!!\n");
		    }
		cont++;	
		
    } //Fim do while
	
	printf("\nA media de idade para homens e de %.1f anos", mediaM);
	printf("\nA media de idade para mulheres e de %.1f anos", mediaF);	    
		    
           
} //Fim do programa

