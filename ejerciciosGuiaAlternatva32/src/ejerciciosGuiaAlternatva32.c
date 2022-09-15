/*
 ============================================================================
 Name        : ejerciciosGuiaAlternatva32.c
 Author      : ker
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	char nonbreEmpleado[25];
	int antiguedad;
	int estudios;
	char validacion;
	char nacionalidad;

	do
	{
	printf("ingresar nobre del empleado\n");
	scanf("%s", nonbreEmpleado);
	fflush(stdin);

	printf("antiguedad por año");
	scanf("%d",&antiguedad);

	printf(" estudios cursados (1- primaria, 2 - secundario, 3 - universitario) ");
	scanf("%d",&estudios);

	printf("del empleado, nacionalidad (A argentino,E -extranjero) \n");
	scanf("%s",&nacionalidad);
	fflush(stdin);

	printf(" quieres seguir iterando\n");
	scanf("%s",&validacion);
	fflush(stdin);

	}while(validacion=='s');




	return EXIT_SUCCESS;
}
En una empresa se carga por teclado los siguientes datos: nombre del empleado,
nacionalidad (A argentino,
E -extranjero), estudios cursados (1- primaria, 2 - secundario, 3 - universitario)
y antigüedad. Se pide emitir
un listado con aquellos empleados que sean extranjeros, tengan estudios universitarios
y tengan una
antigüedad igual o mayor a 20 años y por último indicar cuantos son y
qué porcentaje son respecto del total
de empleados de la empresa
