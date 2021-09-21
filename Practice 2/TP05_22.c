/*

22. Dado el cuadrado cuyos vértices son A(0,0), B(0,M), C(M,M) y D(M,0) y siendo una de
sus diagonales el segmento comprendido entre (0,0) y (M,M), se ingresan N puntos.
Determinar la cantidad de puntos que pertenecen :
a) a los lados
b) a la diagonal indicada
c) al triángulo superior determinado por la diagonal y el cuadrado
d) al triángulo inferior.

*/

#include <stdio.h>

void classifyCoor(int N[], int M);

int main(void){
	//Geometry of the square
	int A[2], B[2], C[2], D[2];
	int M;
	// Related to user coordinates
	int status = 1;
	int N[2];

	// User defines the geometry of the square.
	printf("Por favor, ingresa un número M tal que A(0,0), B(0,M), C(M,M) y D(M,0) son los vértices de un cuadrado: ");
	scanf("%i", &M);

	// Assign values for each cordinate based on M.
	A[0] = 0;
	A[1] = 0;
	B[0] = 0;
	B[1] = M;
	C[0] = M;
	C[1] = M;
	D[0] = M;
	D[1] = 0;	

	while (status == 1){
		printf("Por favor, ingresa la coordenada x de N(x,y): ");
		scanf("%i", &N[0]);

		printf("Por favor, ingresa la coordenada de y de N(%i,y): ", N[0]);
		scanf("%i", &N[1]);
		printf("\n");
		classifyCoor(N, M);
		printf("\n");
		
		printf("Desea ingresar otro número? (si=1, no=0)");
		scanf("%i",&status);
	}
	return 0;
}

void classifyCoor(int N[], int M){
	
	// Evaluates if N belongs to the sides of the square
	if ( (N[0]<=M && (N[1] == 0 || N[1] == M)) || ( N[1]<=M && (N[0]==0 || N[0] == M) )){
		printf("N(%i,%i) se encuentra en los lados del cuadrado.\n", N[0], N[1]);
		return;
	}

	// Evaluates if N belongs to the diagonal of the square;
	if ( N[0] == N[1] && N[0]<M && N[1]<M ){
		printf("N(%i,%i) se encuentra en la diagonal del cuadrado.\n", N[0], N[1]);
		return;	
	}

	// Evaluates if N is in the upper or lower triangle
	if ( N[0]<N[1] && N[1]<M && N[0]<M){
		printf("N(%i,%i) se encuentra en el triángulo superior del cuadrado.\n", N[0], N[1]);
		return;
	}
	if ( N[1]<N[0] && N[1]>0 && N[0]<M ){
		printf("N(%i,%i) se encuentra en el triángulo inferior del cuadrado.\n", N[0], N[1]);
		return;
	}

	printf("N(%i,%i) no se encuentra en el cuadrado.\n", N[0], N[1]);
}
