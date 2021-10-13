/*

25. Se ingresan N pares de valores, donde el primer valor indica la edad de la persona y el
segundo valor su altura. Presentar por pantalla :

a) la mayor edad ingresada y el orden en que ingresó,
b) la menor altura ingresada y el orden en que ingresó,
c) el promedio de las edades,
d) el promedio de las alturas.

*/

#include <stdio.h>

void loadMat(int M, int N, float matrix[M][N]);
void getOldest(int M, int N, float matrix[M][N]);
void getShortest(int M, int N, float matrix[M][N]);
void getMeanAge(int M, int N, float matrix[M][N]);
void getMeanHeight(int M, int N, float matrix[M][N]);


int main(void){

	// Asks the number of rows that will be loaded.
	int M;
	int N = 2;
	
	printf("Cuántos valores se ingresarán? ");
	scanf("%i", &M);

	// Declares a matrix with M rows and 2 columns (age and height)
	float peopleMat[M][N];

	// Loads the matrix
	loadMat(M, N, peopleMat);
	
	// Calculating results.
	getOldest(M, N, peopleMat);
	getShortest(M, N, peopleMat);
	getMeanAge(M, N, peopleMat);
	getMeanHeight(M, N, peopleMat);

	return 0;
}

void loadMat(int M, int N, float matrix[M][N]){
	for (int i = 0; i < M; i++){
		for (int j = 0; j < N; j++){
			if (j == 0){
				printf("Por favor ingrese la edad de la persona %i: ", i);
				scanf("%f", &matrix[i][j]);
			}
			if (j == 1){
				printf("Por favor ingrese la altura de la persona %i (cm): ", i);
				scanf("%f", &matrix[i][j]);
			}
		}
	}
}

void getOldest(int M, int N, float matrix[M][N]){
	int oldest = matrix[0][0];
	int oldest_pos = 0;

	for (int i = 0; i < M; i++){
		if (oldest < matrix[i][0]){
			oldest = matrix[i][0];
			oldest_pos = i;
		}	
	}

	printf("La persona más adulta se encuentra en la posición %i, y su edad es %i.\n", oldest_pos, oldest);
}

void getShortest(int M, int N, float matrix[M][N]){
	int shortest = matrix[0][0];
	int shortest_pos = 0;

	for (int i = 0; i < M; i++){
		if (shortest > matrix[i][0]){
			shortest = matrix[i][1];
			shortest_pos = i;
		}	
	}

	printf("La persona más baja se encuentra en la posición %i, y su altura es %i cm.\n", shortest_pos, shortest);


}

void getMeanAge(int M, int N, float matrix[M][N]){
	int total_ages = 0;
	
	for (int i = 0; i < M; i++){
		total_ages += matrix[0][i];
	}
	printf("El promedio de las edades es %i. \n", (total_ages/(M+1)));
}

void getMeanHeight(int M, int N, float matrix[M][N]){
	int total_heights = 0;
	
	for (int i = 0; i < M; i++){
		total_heights += matrix[1][i];
	}
	printf("El promedio de las alturas es %i cm. \n", (total_heights/(M+1)));

}
