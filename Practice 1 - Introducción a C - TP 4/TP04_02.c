// 2. Leer dos números enteros presentar por pantalla el promedio de ellos.


#include <stdio.h>

int main(void){
	int a,b;
	int prom;

	printf("Ingrse un numero: ");
	scanf("%i", &a );

	printf("Ingrse un numero: ");
	scanf("%i", &b );
	
	prom = (a+b)/2;
	printf("La media aritmetica es: %i ", prom);

	return 0;

}
