/*
 ============================================================================
 Name        : probandoPunteros.c
 Author      : ker
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int mutiplicacionConversion (int* , int );

int main(void) {
	setbuf(stdout, NULL);

	int kervin=30;
	int* pKervin;
	int gracias;
	int multi;
	printf("gracias por interactuar con nosotros, ingrese un numero\n");
	scanf("%d", &gracias);

	printf("numero ingresado es %d \n", gracias);

	multi= mutiplicacionConversion (&gracias,  2);


	printf("la edad de kervin es %d\n", kervin);
	printf("la direccion de la celda que contiene kervin %p\n", &kervin);
	printf("la direccion de la celda que contiene punetor de kervin %p\n", &pKervin);
	printf("la suma de su igual  es %d direccion de gracias %p  su valor %d", multi, &gracias,gracias);

	return EXIT_SUCCESS;
}
int mutiplicacionConversion (int* conversion , int sumaDeSiMismo)
{
	int multiplicacion;

	multiplicacion= *(conversion) * sumaDeSiMismo;

	*conversion-=5;

	return	multiplicacion;
}
