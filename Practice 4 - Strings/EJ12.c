/*

12.-     Ingresar N cadenas en minúsculas, pasarlas a mayúsculas y ordenarlas alfabéticamente. 

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	int M = 4;
	char stringMatrix[M][30];
		
	// User defines the nr of strings that will introduce
	printf("Cuántas palabras ingresará? ");
	scanf("%i", &M);
	
	
	// User populates the matrix
	for (int i = 0; i < M; i++){
		printf("Ingrese string %i: ", i);
		scanf("%s[^\n]", stringMatrix[i]);
	}
	
	
	// Sort the array of strings
	for (int i = 0; i < M-1; i++){
		char temp[30];
		for (int j = 0; j < (M-1); j++){
			if (strcmp(stringMatrix[j],stringMatrix[j+1])>0){
				strcpy(temp,stringMatrix[j]);
				strcpy(stringMatrix[j], stringMatrix[j+1]);
				strcpy(stringMatrix[j+1], temp);
			}	
		}
	 	
	}
	
	// Prints out the matrix
	printf("STRINGS ORDENADOS ALFABETICAMENTE\n");
	for (int i = 0; i < M; i++){
		printf("%i - %s", i, stringMatrix[i]);
		printf("\n");
	}
	
	
	return 0;
}
