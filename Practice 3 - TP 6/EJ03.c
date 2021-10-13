/*

3. Ingresar un vector de orden N. Mostrar un mensaje que diga cuál es la posición y el valor del
elemento mayor.
	Ej:
		El vector V = (6, 45, 12, 84, -7, 0, 16)
		El elemento mayor es 84 y está en la posición 4.
*/

#include <stdio.h>

int main(void){
	int N, mayorPos;
	double mayor;

	printf("Cuántos elementos tendrá el arreglo? ");
	scanf("%i",&N);
	
	double arr[N];
	for (int i=0; i<N; i++){
		printf("Ingrese el elemento %i del arreglo: ", (i+1));
		scanf("%lf", &arr[i]);
	}

	mayorPos = 0;
	mayor = arr[0];
	for (int i=0; i<N; i++){
		if (arr[i] > mayor){
			mayor = arr[i];
			mayorPos = i;
		}
	}

	printf("El mayor número es %.1lf.\n", mayor);
	printf("La posición del mayor es %i.\n", mayorPos);

	return 0;
}
