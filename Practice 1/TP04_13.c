// 13. Ingresar tres números enteros, determinar si están ordenados en forma ascendente o descendente, y si son consecutivos. Presentar por pantalla el mensaje correspondi nte.

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a,b,c;

	printf("Por favor introduce el primer número: ");
	scanf("%i", &a);
	printf("Por favor introduce el segundo número: ");
	scanf("%i", &b);
	printf("Por favor introduce el tercer número: ");
	scanf("%i", &c);


	if (a<b && b<c){
		printf("Están en orden ascendente. ");
		if(abs(b-a)==1 && abs(c-b)==1 && abs(c-a)==2){
			printf("Los números son consecutivos!");
			return 0;
		}else{
			printf("Los números no son consecutivos.");
			return 0;
		}	
	}
	if (c<b && b<a){
		printf("Están en orden descendente. ");
		if(abs(b-a)==1 && abs(c-b)==1 && abs(c-a)==2){
			printf("Los números son consecutivos!");
			return 0;
		}else{
			printf("Los números no son consecutivos.");
			return 0;
		}
	}

	printf("Los números no están ordenados");
	return 0;
	
	

}
