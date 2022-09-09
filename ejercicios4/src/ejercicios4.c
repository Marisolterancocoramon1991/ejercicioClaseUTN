/*
 ============================================================================
 Name        : ejercicios4.c
 Author      : ker
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int ingresoValidacionNumeroEntro(void);

int main(void) {
	setbuf(stdout, NULL);

	int numeroRetornar = ingresoValidacionNumeroEntro();
	int factorial=1;


	for(int i=1; i <= numeroRetornar; i++ )
	{
			factorial=factorial*i;

	}

	printf("numero que retorna es %d y su factorial es %d",numeroRetornar,factorial );


	return EXIT_SUCCESS;
}
int ingresoValidacionNumeroEntro(void)
{
	int numeroEntero;
	do
	{
	printf("ingresar numero entero del 0 al 10");
	scanf("%d",&numeroEntero);
	}while(numeroEntero <0 || numeroEntero >10);
	return numeroEntero;
}

/*Ejercicio 3-3:
Crear una función que pida el ingreso de un entero y lo retorne.
Ejercicio 3-4:
Especializar la función anterior para que permita validar el entero ingresado en un rango determinado.
 *
 */
