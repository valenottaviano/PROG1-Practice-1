/*

26. Un pobre le dijo a un rico: " cada día le pagaré $100. A cambio, Ud. me dará el primer día
$1, el segundo $2, el tercero $4, el cuarto $8, es decir cada día el doble del anterior, y así
hasta terminar el mes de 30 días". Calcular:

a) las cantidades entregadas por el rico y por el pobre,
b) a partir de qué día el rico le dio más dinero al pobre, si es que esto ocurrió.

*/

#include <stdio.h>

int main (void){
	double totalRichPaid[30];
	double totalPoorPaid[30];

	double totalRich = 0 , totalPoor = 0;

	int is_winning = 0;

	for (int i = 0; i<30; i++){
		if (i == 0){
			totalRichPaid[i] = 1;
			totalRich += 100;
			totalPoorPaid[i] = 100;
			totalPoor = 100;
		}else{
			totalRichPaid[i] = totalRichPaid[(i-1)]*2;
			totalRich += totalRichPaid[i];
			totalPoorPaid[i] = 100;
			totalPoor += totalPoorPaid[i];
		}
	
		printf("Dia: %i -- P: %.0lf -- R: %.0lf \n", (i+1),totalPoorPaid[i], totalRichPaid[i]);
		
		if (totalRich > totalPoor && is_winning == 0){
			printf("ADELANTA EL POBRE!!!\n");
			is_winning =1;
		}
	}

	printf("El pobre pago: %.0lf. El rico pago %.0lf\n", totalPoor, totalRich);

	return 0;
}
