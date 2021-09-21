/*

7.- Ingresar dos nombres y un apellido, todos en minúsculas, y presentar el apellido y los dos 
nombres  (con la primera letra en mayúsculas) separados solamente por guiones.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void){
	char firstName[20];
	char secondName[20];
	char surname[20];
	
	char fullName[60];

	printf("Por favor, ingrese el primer nombre: ");
	fgets(firstName, sizeof(firstName), stdin);

	printf("Por favor, ingrese el segundo nombre: ");
	fgets(secondName, sizeof(secondName), stdin);

	printf("Por favor, ingrese el apellido: ");
	fgets(surname, sizeof(surname), stdin);
	
	int k = 0;

	// Using strlen(word) -1 I'm able to remove \n introduced on fgets
	// Loops over the first name
	for (int i = 0; i < (strlen(firstName)-1); i++){
		if (i==0){
			fullName[k] = toupper(firstName[i]);
			k++;
			continue;
		}
		fullName[k] = firstName[i];
		k++;

	}
	fullName[k] = '-';
	k++;


	// Loops over the second name
	for (int i = 0; i < (strlen(secondName)-1); i++){
		if (i==0){
			fullName[k] = toupper(secondName[i]);
			k++;
			continue;
		}
		fullName[k] = secondName[i];
		k++;

	}
	fullName[k] = '-';
	k++;


	// Loops over the surname
	for (int i = 0; i < (strlen(surname)-1); i++){
		if (i==0){
			fullName[k] = toupper(surname[i]);
			k++;
			continue;
		}
		fullName[k] = surname[i];
		k++;

	}

	for (int i = 0; i < strlen(fullName); i++){
		printf("%c", fullName[i]);
	}
	printf("\n");

	return 0;
}
