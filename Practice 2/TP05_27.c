/*

27. Un juego consiste en tirar un dado y sumar sus puntos hasta que el valor obtenido en
un tiro sea par. Diseñar un algoritmo que pida el valor del tiro y presente por pantalla
la cantidad de tiros y el puntaje total, sin contar el último tiro.

*/


#include <stdio.h>

int main (void){
	int total_score = 0;
	int current_score;
	int finished = 0;
	int count_games = 0;

	while (finished == 0){
		printf("Por favor ingrese el valor del tiro: ");
		scanf("%i", &current_score);
		
		if (current_score % 2 == 0){
			finished = 1;
		}else{
			total_score += current_score;
			count_games++;
		}

	}

	printf("El puntaje total es %i. Se realizaron %i tiros.\n", total_score, count_games);

}
