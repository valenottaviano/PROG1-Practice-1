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
Contact createContact();
void displayAgenda(int recordsSaved, Contact recordsList[]);
void editContact(int recordsSaved, Contact recordsList[]);
void removeContact(int recordsSaved, Contact recordsList[]);

int main (void){
        int status = 1;
        Contact recordsList[50];
	int recordsSaved = 0;
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
                        	Contact newContact = createContact();
				recordsList[recordsSaved] = newContact;
				recordsSaved++;
				break;
			case 2:
				editContact(recordsSaved, recordsList);
				break;
			case 3:
				removeContact(recordsSaved, recordsList);
				recordsSaved--;
				break;	
			case 4:
				displayAgenda(recordsSaved, recordsList);
				break;
                        case 9:
                                //Exit the program.
                                status = 0;
				break;
                }
        }
        return 0;
}

Contact createContact(){
	Contact newContact;

	printf("Name: ");
	fgets(newContact.name, sizeof(newContact.name), stdin);
	printf("Surname: ");
	fgets(newContact.surname, sizeof(newContact.surname), stdin);
	printf("Birthday: ");
	fgets(newContact.birthday, sizeof(newContact.birthday), stdin);
	printf("Phone Number: ");
	scanf("%lf", &newContact.phoneNumber);


	printf("-------------------------------------\n");
	printf("New contact added successfulyy. \n");
	printf("-------------------------------------\n");

	return newContact;
}

void displayAgenda(int recordsSaved, Contact recordsList[]){
	printf("-------------------------------------\n");
	for (int i=0; i<recordsSaved; i++){
		printf("Index: %i\n",i);
		printf("Name: %s", recordsList[i].name);
		printf("Surname: %s", recordsList[i].surname);
		printf("Birthday: %s", recordsList[i].birthday);
		printf("Phone Number: %.lf\n", recordsList[i].phoneNumber); 
		printf("\n");
	}
	printf("-------------------------------------\n");
}

void editContact(int recordsSaved, Contact recordsList[]){
	int contactSelected;
	int propertySelected;

	printf("-------------------------------------\n");
	printf("There are %i contacts in your agenda.\n", recordsSaved);
	printf("\n");
	
	displayAgenda(recordsSaved, recordsList);

	printf("Please select the index of the contact to edit: ");
	scanf("%i", &contactSelected);
	printf("Please select the property to edit.\n");
	printf("[1] Name - [2] Surname - [3] Birthday - [4] Phone Number... ");
	scanf("%i", &propertySelected);
	getchar();

	switch (propertySelected){
		case 1:
			printf("Name: ");
			fgets(recordsList[contactSelected].name, sizeof(recordsList[contactSelected].name), stdin);
			break;
		case 2:
			printf("Surname: ");
			fgets(recordsList[contactSelected].surname, sizeof(recordsList[contactSelected].surname), stdin);
			break;
		case 3:
			printf("Birthday: ");
			fgets(recordsList[contactSelected].birthday, sizeof(recordsList[contactSelected].birthday), stdin);
			break;
		case 4:
			printf("Phone Number: ");
			scanf("%lf", &recordsList[contactSelected].phoneNumber);
			break;
	}
	printf("-------------------------------------\n");


}

void removeContact(int recordsSaved, Contact recordsList[]){
	int contactSelected;

	displayAgenda(recordsSaved, recordsList);
	printf("Please select the index of the contact to delete: ");
	scanf("%i", &contactSelected);
	
	if (contactSelected >= 0 && contactSelected < recordsSaved){
		if (recordsSaved >1){
			for (int i=contactSelected; i<(recordsSaved-1); i++){
				recordsList[i] = recordsList[i+1];
			}
		}
		printf("Contact deleted successfully.\n");
	}

}











