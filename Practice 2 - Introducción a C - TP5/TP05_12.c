/*
12. Ingresar un número expresado en el sistema binario, convertirlo al sistema decimal.
Presentar ambos números en el centro de la pantalla.
*/


#include <stdio.h>
#include <math.h>



int main(void){
  int decimalNumber = 0;
  int binaryDigits = 0;


  printf("Por favor, ingrese la cantidad de dígitos del número binario: ");
  scanf("%i", &binaryDigits);

  int binaryNumber[binaryDigits];
  for(int i = 0; i < binaryDigits; i ++){
    printf("Ingrese el dígito %i del número binario: ", (i+1));
    scanf("%i", &binaryNumber[i]);
  }

  for (int i = 0; i<binaryDigits; i ++){
    int temp;
    temp = pow(2,(binaryDigits-i-1));
    decimalNumber += binaryNumber[i]*temp;
  }

  printf("El número binario: ");
  for (int i =0; i<binaryDigits; i++){
    printf("%i", binaryNumber[i]);
  }
  printf(" es igual a %i. \n", decimalNumber);
  
  return 0;
}

