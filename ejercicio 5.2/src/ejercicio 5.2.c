/*
 ============================================================================
 Name        : 2.c
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

	int numero[10];
	int cantidadNegativo;
	cantidadNegativo=0;
	int cantidadPositivo;
	cantidadPositivo=0;
	int sumatoriaPares;
	sumatoriaPares=0;
	int mayorImpares;
	int bandera;
	bandera=1;
	int contadorPares;
	contadorPares=0;
	int listadoNumerosPar[contadorPares];
	int i;

	for(i=0; i<10; i++)
	{
		printf("ingresar el numero del espeacio %d", i);
		scanf("%d", &numero[i]);
	}
	for(i=0; i<10;i++)
	{
		if(numero[i]>0)
		{
			cantidadPositivo++;

		}else
		{
			cantidadNegativo++;
		}
		if(numero[i] %2==0)
			{
				sumatoriaPares+=numero[i];


				listadoNumerosPar[contadorPares];
				contadorPares=contadorPares+1;

			}else
			{
				if(bandera==1)
				{
					mayorImpares=numero[i];
					bandera=0;
				}else
				{
					if(numero[i]>mayorImpares)
					{
						mayorImpares=numero[i];
					}
				}
			}
	}



	printf("cantidad de positivos %d cantidad de negativo %d sumatoria de pares %d \nel mayor de los "
			"impares %d listado de los numeros ingresados %d \n listado de los numeros pares %d "
			,cantidadPositivo,cantidadNegativo,sumatoriaPares,mayorImpares,numero[i], listadoNumerosPar[contadorPares]);

	return EXIT_SUCCESS;
}

/*Ejercicio 5-2:
Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
Cantidad de positivos y negativos.
Sumatoria de los pares.
El mayor de los impares.
Listado de los números ingresados.
Listado de los números pares.
Listado de los números de las posiciones impares.
Anexo 5-2
Los números que se repiten
Los positivos creciente y los negativos de manera decreciente
Se deberán utilizar funciones y vectores.
 *
 */