/*

11. Se ingresan las coordenadas de N puntos en el plano. Estos forman con el origen un
radio vector que representa una fuerza. Debe Ud. presentar por pantalla la magnitud y
ángulo con OX de la resultante, de este sistema de fuerzas concurrentes.

*/

#include <stdio.h>
#include <math.h>


int main (void){
  int status = 1;
  const double PI =  3.1415926;

  double x_total;
  double y_total;
  double vector_norm;

  while (status == 1){
    double x_temp;
    double y_temp;

    printf("Por favor ingrese la coordenada x: ");
    scanf("%lf", &x_temp);

    printf("Por favor ingrese la coordenada y: ");
    scanf("%lf", &y_temp);

    x_total += x_temp;
    y_total += y_temp;
    

    printf("Desea agregar otro par ordenado? (si=1,no=0): ");
    scanf("%i", &status);
  }

  vector_norm = sqrt(pow(x_total,2)+pow(y_total,2));

  printf("Módulo del vector --> : %.2lf. ", vector_norm);
  printf("Ángulo con el ox %.2lf grados. \n", (acos(x_total/vector_norm)*180/PI));
  return 0;
}
