// 12. Ingresar la fecha de nacimiento de una persona con en el formato dd, mm y aaa.Mostrar por pantalla la edad (años, meses y días).


#include <stdio.h>
#include <math.h>

int main(void){
	int dia_actual, mes_actual, agno_actual;
	int dia_nacimiento, mes_nacimiento, agno_nacimiento;
	int dias, meses, agnos;

	printf("Por favor introduce el agno actual: ");
	scanf("%i", &agno_actual);

	printf("Por favor introduce el mes actual: ");
	scanf("%i", &mes_actual);
	
	printf("Por favor introduce el dia actual: ");
	scanf("%i", &dia_actual);

	printf("\n ---------------- \n");

	printf("Por favor introduce el agno de nacimiento: ");
	scanf("%i", &agno_nacimiento);

	printf("Por favor introduce el mes de nacimiento: ");
	scanf("%i", &mes_nacimiento);
	
	printf("Por favor introduce el dia de nacimiento: ");
	scanf("%i", &dia_nacimiento);

	printf("\n ---------------- \n");

	if (agno_nacimiento == agno_actual){
		agnos = 0;
	}else{
		agnos = agno_actual - agno_nacimiento;
	}

	if (mes_actual < mes_nacimiento){
		agnos = agnos - 1;
		meses = 12 + mes_actual - mes_nacimiento;
	}else{
		meses = mes_actual - mes_nacimiento;
	}

	if (dia_actual < dia_nacimiento){
		meses = meses -1;
		dias = 30 + dia_actual - dia_nacimiento;
	}else{
		dias = dia_actual - dia_nacimiento;
	}

	printf("Has vivido %i agnos, %i meses y %i dias. ", agnos, meses, dias);

	

}
