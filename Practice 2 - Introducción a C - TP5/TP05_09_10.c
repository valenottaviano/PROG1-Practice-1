/*

9. Dados tres cuadrados que se forman con los segmentos de las rectas que se indican :

a) cuadrado 1 : rectas x = 1, y = 1, x = -1, y = -1
b) cuadrado 2 : rectas x = 2, y = 2, x = -2, y = -2
c) cuadrado 3 : rectas x = 3, y = 3, x = -3, y = -3
Si se considera que estos forman un blanco de tiro y que el puntaje es el siguiente:
a) dentro de cuadrado 1 : 3 puntos
b) fuera del cuadrado 1 y dentro del 2 : 2 puntos
c) fuera del cuadrado 2 y dentro del 3 : 1 puntos
d) las rectas pertenecen al cuadrado que forman

10. Ingresar las coordenadas de N puntos en el plano, que representarían tiros. Presentar
un mensaje que indique el puntaje total.

*/


#include <stdio.h>
#include <stdlib.h>

int calculateScore(int x, int y);

int main(void){
  int score;
  int x,y;
  
  printf("Ingrese la coordenada en x: ");
  scanf("%i", &x);

  printf("Ingrese la coordenada en y: ");
  scanf("%i", &y);

  score = calculateScore(x,y);

  printf("Conseguiste %i puntos!!!\n", score);
  return 0;
}

int calculateScore(int x, int y){

  if (abs(x) <= 1 && abs(y) <= 1){
    return 3;
  }

  if (abs(x) <= 2 && abs(y) <= 2){
    return 2;
  }

  if (abs(x) <= 3 && abs(y) <= 3){
    return 1;
  }


  return 0;
}
