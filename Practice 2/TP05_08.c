/* 8. Ingresar las coordenadas de N puntos en el plano indicar cuántos de ellos están :

    a) en el origen de coordenadas
    b) en el eje x
    c) en el eje y
    d) en el primer cuadrante
    e) en el segundo cuadrante
    f) en el tercer cuadrante
    g) en el cuarto cuadrante

*/



#include <stdio.h>

int main(void){
  int x;
  int y;

  int status = 1;

  while (status == 1){
      
      // El usuario introduce una coordenada en x e y
      printf("x = ");
      scanf("%i", &x);

      printf("y = ");
      scanf("%i", &y);
      // Excluye el (0,0)
      if (x == 0 && y == 0){
        printf("Se encuentra en el origen de coordenadas.\n");
      }else{
        
        // Se encuentra sobre algún eje?
        if (x == 0 || y == 0){
          // Evalua si se encuentra en el ox
          if (x == 0){
            printf("Se encuentra en el eje x.\n");
          }
          // Evalua si se encuentra en el oy
          if (y == 0){
            printf("Se encuentra en el eje y.\n");
          }
        }else{
          // Al no encontrarse en ningún eje, continua el condicional.
          if (x>0 && y>0){
            printf("se encuentra en el primer cuadrante.\n");
          }
          if (x<0 && y>0){
            printf("se encuentra en el segundo cuadrante.\n");
          }
          if (x<0 && y<0){
            printf("se encuentra en el tercer cuadrante.\n");
          }
          if (x>0 && y<0){
            printf("se encuentra en el cuarto cuadrante.\n");
          }
        }
      }
      printf("Desea continuar? (si=1,no=0) ");
      scanf("%i",&status);
  }
  return 0;
}
