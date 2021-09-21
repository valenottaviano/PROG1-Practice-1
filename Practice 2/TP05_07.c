/*
 
   7. Ingresar un número natural de 4 o más dígitos, invertir el orden de sus dígitos.
Presentar por pantalla el número ingresado y su invertido.
Ejemplo: número = 34256, invertido = 65243


*/

#include <stdio.h>



int main(void){

  //Declares a variable that will store the amount of digits that the number (array) will have.
  int digits;
  printf("Por favor ingrese el número de digitos que tendrá el número: ");
  scanf("%i", &digits);


  // Declares the array that will store the entire nomber per digit
  int number_arr[digits];

  //Populates the array
  for (int i = 0; i < digits; i++){
    int temp;
    printf("Ingrese el dígito número %i: ", (i+1));
    scanf("%i", &temp);
    number_arr[i] = temp;
  }


  // Inverts the array (entire number)
  for (int i = 0 ; i < (digits/2); i++){
    int temp;
    temp = number_arr[(digits-i-1)];
    number_arr[digits-i-1] = number_arr[i];
    number_arr[i] = temp;
  }

  // Prints out the inverted array
  printf("El número invertido es: ");
  for (int i = 0; i < digits; i++){
    printf("%i",number_arr[i]);
  }
  printf("\n");

  return 0;
}
