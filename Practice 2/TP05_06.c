//6. Dada la ecuación de la recta y = 2/3 x - 2, ingresar las coordenadas de N puntos en el plano.
//Mostrar: 
//  a) los puntos pertenecen a la recta
//  b) los puntos que están arriba
//  c)los que están debajo de ella.

#include <stdio.h>

int main(void){
  int x;
  int y;

  int status = 1;

  while (status == 1){
      printf("x = ");
      scanf("%i", &x);

      printf("y = ");
      scanf("%i", &y);

      if (y > (2*x/3 - 2)){
        printf("Se encuentra por arriba de la recta.\n");
      }


      if (y < (2*x/3 - 2)){
        printf("Se encuentra por debajo de la recta.\n");
      }


      if (y == (2*x/3 - 2)){
        printf("Se encuentra en la recta.\n");
      }

      printf("Desea continuar? (si=1,no=0) ");
      scanf("%i",&status);
 
  }



  return 0;
}
