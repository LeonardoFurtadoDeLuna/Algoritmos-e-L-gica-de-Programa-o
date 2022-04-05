/*
	Name: TemperaturaCorporal
	Copyright: 
	Author: leonardo.furtado
	Date: 29/05/20 08:52
	Description: Algoritmo para classificar a temperatura corporal
*/


# include <stdio.h>
# include <conio.h> 

main ()

{  
    float temp;
    temp = 0.0;
   
    puts("Programa para classificar a temperatura corporal\n");
    printf("Informe sua temperatura: ");
    scanf("%f", &temp);
   
    if (temp<36.0)
       printf("\nSua temperatura corporal e Hipotermia");
    else if (temp<=37.8)
       printf("\nSua temperatura corporal e Normal");
    else if (temp<=39.5)
       printf("\nSua temperatura corporal e Febre");
    else if (temp<=41.0)
       printf("\nSua temperatura corporal e Febre Alta");
    else
       printf("\nSua temperatura corporal e Hipertemia");
    

} //Fim do programa
