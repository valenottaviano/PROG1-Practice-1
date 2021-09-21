// 1. Ingresar tres números enteros, presentar por pantalla la suma de ellos.

#include <stdio.h>

int main(void){
	// Declaro variables que se suamaran
	int a,b,c;
	int suma;


	printf("Por favor ingrese ingrese un entero: ");
	scanf("%d", &a);
	
	printf("Por favor ingrese ingrese un entero: ");
	scanf("%d", &b); 
	
	printf("Por favor ingrese ingrese un entero: ");
	scanf("%d", &c); 

	suma = a + b + c;
	printf("La suma total es: %i \n", suma);
	return 0;
}
