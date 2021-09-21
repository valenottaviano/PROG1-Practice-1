// 8. Dado el precio de un producto indicar, por pantalla, los impuestos que debe pagar. IVA 21%, Ingresos Brutos 2.5% e Impuesto Municipal 1.5%.


#include <stdio.h>


int main(void){
	float precio, IVA, IB, IM;

	printf("Ingresar precio: ");
	scanf("%f", &precio);

	IVA = precio * 0.21;
	IB = precio * 0.025;
	IM = precio * 0.015;

	printf("IVA: %f \n", IVA);
	printf("IB: %f \n", IB);
	printf("IM: %f \n", IM);

	return 0;
}


