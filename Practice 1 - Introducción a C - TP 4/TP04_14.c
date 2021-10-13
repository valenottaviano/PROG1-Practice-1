// 14. Ingresar tres números, ordenarlos en forma ascendente y presentarlos por pantalla. En caso de ser iguales imprimir un mensaje que diga " Son Iguales".


#include <stdio.h>

int main(void){
	int a,b,c;
	
	printf("Por favor ingresar tres números enteros: \n");
	scanf("%i",&a);
	scanf("%i",&b);
	scanf("%i",&c);

	if (a==b && b==c){
		printf("Los tres números son iguales.");
		return 0;
	}

	// Filtro si "a" es el menor de todos.
	if (a<b && a<c){
		//Filtro si el segundo número es "b" o "c".
		if (b<c){
			printf("Los números ordenados son: %i-%i-%i.", a,b,c);
			return 0;
		}else{
			printf("Los números ordenados son: %i-%i-%i.", a,c,b);
			return 0;
		}
	}

	// Filtro si "b" es el menor de todos.
	if (b<a && b<c){
		//Filtro si el segundo número es "a" o "c".
		if (a<c){
			printf("Los números ordenados son: %i-%i-%i.", b,a,c);
			return 0;
		}else{
			printf("Los números ordenados son: %i-%i-%i.", b,c,a);
			return 0;
		}
	}

	// Filtro si "c" es el menor de todos.
	if (c<b && c<a){
		//Filtro si el segundo número es "b" o "a".
		if (b<a){
			printf("Los números ordenados son: %i-%i-%i.", c,b,a);
			return 0;
		}else{
			printf("Los números ordenados son: %i-%i-%i.", c,a,b);
			return 0;
		}
	}
	return 0;
}
