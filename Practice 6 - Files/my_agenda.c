/*

Objetivo: Una aplicación que me permita almacenar mi agenda personal. Se deberá poder hacer las siguientes acciones:
1. Crear personas
2. Editar personas
3. Eliminar personas

*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <curses.h>

// Defin struct of a single contact
typedef struct {
	char name[30];
	char surname[30];
	char birthday[30];
	double phoneNumber;
}Contact;

// Menu functions
Contact createContact(FILE *arch);
int displayAgenda(FILE *arch);
void editContact(FILE *arch);
void removeContact(FILE *arch, int elementToDelete);

int main (void){
	FILE *arch;
	int status = 1;
	Contact recordsList[50];
	int optionSelected = 0;
											
	while (status == 1){
		printf("WELCOME TO YOUR PERSONAL AGENDA.\n");
		printf("Please, enter one of the following options: \n");
		printf("[1] - Add a new contact\n");
		printf("[2] - Edit one contact\n");
		printf("[3] - Remove one contact\n");
		printf("[4] - Display the entire agenda\n");
		printf("[9] - Exit the program\n");
		
		scanf("%i", &optionSelected);
		getchar();
			
	switch (optionSelected){
		case 1:
			Contact newContact = createContact(arch);
			break;
		case 2:
			editContact(arch);
			break;
		case 3:
			int _ = displayAgenda(arch);
			int toDelete;

			printf("Please, select the position of the contact to delete.\n");
			scanf("%i", &toDelete);
			getchar();
			removeContact(arch, toDelete);
			break;	
		case 4:
			displayAgenda(arch);
			break;
		case 9:
			//Exit the program.
			status = 0;
			break;
			}
	}
	return 0;
}

Contact createContact(FILE *arch){
	Contact newContact;
	arch = fopen("./contacts.dat", "a+");
	if(arch == NULL){
		arch = fopen("./contacts.dat", "w+");
	}	

	printf("Name: ");
	fgets(newContact.name, sizeof(newContact.name), stdin);
	printf("Surname: ");
	fgets(newContact.surname, sizeof(newContact.surname), stdin);
	printf("Birthday: ");
	fgets(newContact.birthday, sizeof(newContact.birthday), stdin);
	printf("Phone Number: ");
	scanf("%lf", &newContact.phoneNumber);

	fwrite(&newContact, sizeof(newContact),1, arch);
	fclose(arch);

	printf("-------------------------------------\n");
	printf("New contact added successfulyy. \n");
	printf("-------------------------------------\n");

	return newContact;
}

int displayAgenda(FILE *arch){
	Contact contact;
	int counter = 0;

	arch = fopen("./contacts.dat", "r+");
	fread(&contact, sizeof(contact), 1, arch);

	while(!feof(arch)){
		printf("Name: %s", contact.name);
		printf("Surname: %s", contact.surname);
		printf("Birthday: %s", contact.birthday);
		printf("Phone Number: %.lf\n", contact.phoneNumber); 
		printf("-------------------------------------\n");
		counter++;
		fread(&contact, sizeof(contact), 1, arch);
	}
	fclose(arch);

	return counter;	
}

void editContact(FILE *arch){
	int propertySelected, contactSelected;
	int contactsOnAgenda;
	contactsOnAgenda = displayAgenda(arch);

	printf("-------------------------------------\n");
	printf("There are %i contacts in your agenda.\n", contactsOnAgenda);
	printf("\n");


	printf("Please select the index of the contact to edit: ");
	scanf("%i", &contactSelected);

	Contact contact;

	arch = fopen("./contacts.dat", "r+");
	fseek(arch, sizeof(contact)*(contactSelected - 1), 0);
	fread(&contact, sizeof(contact), 1, arch);
	fclose(arch);

	printf("Selected contact:\n");
	printf("Name: %s", contact.name);
	printf("Surname: %s", contact.surname);
	printf("Birthday: %s", contact.birthday);
	printf("Phone Number: %.lf\n", contact.phoneNumber); 
	printf("-------------------------------------\n");

	printf("Please select the property to edit.\n");
	printf("[1] Name - [2] Surname - [3] Birthday - [4] Phone Number... ");
	scanf("%i", &propertySelected);
	getchar();

	switch (propertySelected){
		case 1:
			printf("Name: ");
			fgets(contact.name, sizeof(contact.name), stdin);
			break;
		case 2:
			printf("Surname: ");
			fgets(contact.surname, sizeof(contact.surname), stdin);
			break;
		case 3:
			printf("Birthday: ");
			fgets(contact.birthday, sizeof(contact.birthday), stdin);
			break;
		case 4:
			printf("Phone Number: ");
			scanf("%lf", &contact.phoneNumber);
			break;
	}

	removeContact(arch, contactSelected);
	arch = fopen("./contacts.dat", "a+");
	fwrite(&contact, sizeof(contact),1, arch);
	fclose(arch);

	printf("-------------------------------------\n");
}

void removeContact(FILE *arch, int elementToDelete){
	int contactsOnAgenda = displayAgenda(arch);
	int counter = 0;

	Contact contactList[contactsOnAgenda];
	Contact contact;

	arch = fopen("./contacts.dat", "r+");
	fread(&contact, sizeof(contact), 1, arch);
	while(!feof(arch)){
		contactList[counter] = contact;
		counter++;
		fread(&contact, sizeof(contact), 1, arch);
	}
	fclose(arch);

	arch = fopen("./contacts.dat", "w+");
	for( int i = 0; i < contactsOnAgenda; i++){
		if (i == (elementToDelete-1)){
			continue;
		}
		fwrite(&contactList[i], sizeof(contactList[i]), 1, arch);
	}
	fclose(arch);
}
