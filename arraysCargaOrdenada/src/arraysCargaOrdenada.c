/*
 ============================================================================
 Name        : arraysCargaOrdenada.c
 Author      : ker
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define CAN 3

int main(void) {

	setbuf(stdout, NULL);

	int edad[CAN];
	float salario[CAN];
	int i;
	float acomuladorSalrio;
	acomuladorSalrio=0;

	for(i=0; i< CAN; i++)
	{
		printf("edad de la persona %d", i+1);
		scanf("%d", &edad[i]);

		printf("salario de la persona %d", i+1);
		scanf("%f", &salario[i]);
		acomuladorSalrio+=salario[i];

	}

	for(i=0; i< CAN; i++)
	{
		printf("edad de la persona %d es %d\n", i+1, edad[i]);


	}
	float promedio=acomuladorSalrio/CAN;
	printf("promedio del salario es %f",promedio);
	return EXIT_SUCCESS;
}


/*De los 10 empleados de una fábrica se registra número de legajo (coincidente con
el índice), edad y salario. Se pide ingresar los datos consecutivamente y calcular el sueldo
promedio.*/
