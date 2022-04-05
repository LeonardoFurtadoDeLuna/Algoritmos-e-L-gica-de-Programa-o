/*
	Name: lista4Questão3.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 09/07/20 15:38
	Description: Algoritmo para ler a altura e armazenar em um vetor,
	             calcular a média usando os laços DoWhile e For.
*/

#include <conio.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

main()
{
    
    setlocale(LC_ALL,"portuguese");
    
    
    float alturas[7], altura, media;
    int x = 0;
    media = altura = 0.0;

    do
    {
    printf("Digite sua altura: %d° - ", x + 1);    
    scanf("%f", &altura);
    alturas[x] = altura;
    x++;    
    }while(x < 7);//Fim do DoWhile

    for(int x = 0; x < 7; x++)
    {
        media = media + alturas[x];
        
    }
    printf("\nMédia de alturas: %.2f", media);
    
}//fim do programa
