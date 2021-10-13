// 2. Ingresar N números, presentar por pantalla el promedio de ellos.

#include <stdio.h>


int main(void) {
  int counter = 0, total = 0;
  int status = 1;

  while(status == 1){
    
    int num;
    printf("¿Quiere añadir un número? [si = 1/no = 0] ");
    scanf("%i", &status);

    if (status == 0){
      break;
    }

    printf("Ingrese un número: ");
    scanf("%i", &num);

    total = total + num;
    counter ++;
  }
  printf("El promedio es: %i\n", (total/counter));
  return 0;
}

