/*
	Name: 
	Copyright: 
	Author: leonardo.furtado
	Date: 29/05/20 08:52
	Description: Algoritmo para ler QRCode de ingressos e calcular o percentual.
*/


# include <stdio.h>
# include <conio.h> 

main ()

{  int idade, f, m, c, cont;
   char sexo;
   
   sexo = ' ';
   f = m = c = cont = 0;
   idade = 1;
   
   
   while (idade != 0)
   {
   	
   	printf("\nDigite o seu sexo (M ou F): ");
    scanf(" %c", &sexo);
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
	

    if (sexo == 'f' || sexo == 'F')
		f++;
	else if (sexo == 'm' || sexo == 'M')
	    m++;
	else 
		printf("Sexo informado invalido, esse dado nao vai ser computado no final!!!\n");
		
    if (idade > 0 || idade <= 12 )
        c++;
    else 
        {	}
	
	cont++;
	
   } //Fim do while
   
    printf("\nA quantidade de homens foi de %d", m);
    printf("\nA quantidade de mulheres foi de %d", f);
    printf("\nA quantidade de criancas foi de %d", c);
    printf("\nA quantidade de pessoas que assistiram o jogo foi de foi de %d", cont-1);
   
} // Fim do programa
