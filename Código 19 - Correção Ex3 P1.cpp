/*
	Name: CorrecaoQuestao3
	Copyright: 
	Author: leonardo.furtado
	Date: 29/05/20 08:52
	Description: Programa para calcular os percentuais de sorteio de cada face de um dado
*/


# include <stdio.h>
# include <conio.h> 

main ()

{
	int cont, face, face1, face2, face3, face4, face5, face6;
	cont = face = face1 = face2 = face3 = face4 = face5 = face6 = 0;
	
	while(cont < 10)
	{
		printf("Jogue o dado: ");
	    scanf("%d", &face);
	    
		if(face == 1)
		    face1 = face1 + 1;
		else if(face == 2)
		    face2 = face2 + 1;
		else if (face == 3)
		    face3++;
		else if (face == 4)
		    face4++;
		else if (face == 5)
		    face5++;
		else
		    face6++;
		    
		
		cont++;   	     
	}//Fim do while
	
	
	printf("\nFace 1: %.1f%%", ((float) (face1*100)/cont)); //casting = (float)
	printf("\nFace 2: %.1f%%", ((float) (face2*100)/cont));
	printf("\nFace 3: %.1f%%", ((float) (face3*100)/cont));
	printf("\nFace 4: %.1f%%", ((float) (face4*100)/cont));
	printf("\nFace 5: %.1f%%", ((float) (face5*100)/cont));
	printf("\nFace 6: %.1f%%", ((float) (face6*100)/cont));
   	
	
} //Fim do programa
