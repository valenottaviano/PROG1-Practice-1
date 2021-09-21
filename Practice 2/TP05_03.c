// Se ingresan N números enteros, presentar el promedio de los pares y el promedio de los impares. El cero no se cuenta.

#include <stdio.h>

int main(void){
	int status = 1;

	int sum_even = 0;
	int count_even = 0;
	
	int sum_odd = 0;
	int count_odd = 0;
        
	while (status == 1){
                int num;
 
                // Ask if user wants a number. If not, exit the loop.
                printf("Desea ingresar un número? [Si=1/No=0]: ");
                scanf("%i", &status);
 
                if (status == 0){
                        break;
                }
 
                // num takes the value of the selected number
                printf("Ingresar un número: ");
                scanf("%i", &num);
                
 
                // Classifies the number and increase the correct counter.
                if (num != 0){
			if(num % 2 == 0){
                        	count_even ++;
				sum_even = sum_even + num;
                	}else{
				count_odd ++;
				sum_odd = sum_odd + num;
                	}	
		}

		
        }
	

	// Print out the mean of all even numbers.
	if (count_even == 0){
		printf("No se han ingresado números pares.\n");
	}else{
		printf("Se han contado %i números pares, y su promedio es %i. \n", count_even, (sum_even/count_even));
	}


	// Print out the mean of all odd numbers.
        if (count_odd == 0){
                printf("No se han ingresado números impares.\n");                                
        }else{ 
                printf("Se han contado %i números impares, y su promedio es %i. \n", count_odd, (sum_odd/count_odd));  
        }



	return 0;


}
