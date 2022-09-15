/*
 ============================================================================
 Name        : 3.c
 Author      : ker
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define A 10

int main(void) {
	setbuf(stdout, NULL);

	int numeros[10];
	int i;
	float promedioPositivos;
	float cargarpositivo;
	cargarpositivo=0;
	float cuantosNumerosPositivos;
	cuantosNumerosPositivos=0;
	int menorNegativo;
	menorNegativo=0;
	int sumaNegativos;
	sumaNegativos=0;
	cargarpositivo=0;
	int bandera=1;


	for(i=0; i<10;i++)
	{
		numeros[i]=0;
	}
	for(i=0; i<10;i++)
	{
		printf("cargar los numeros distintos de 0\n");
		scanf("%d", &numeros[i]);
		while(numeros[i]==0)
		{
		printf(" le pifiaste, cargar numeros distintos de 0\n");
		scanf("%d", &numeros[i]);

		}
	}
	for(i=0; i<10;i++)
	{
		if(numeros[i]>0)
		{
				cargarpositivo+=numeros[i];
				cuantosNumerosPositivos++;
		}else
		{
			sumaNegativos= sumaNegativos +  numeros[i];

			if(bandera==1)
			{
					menorNegativo=numeros[i];

					bandera=0;
			}else
			{
				if(numeros[i]<menorNegativo)
				{
					menorNegativo=numeros[i];
				}
			}

		}


	}

	promedioPositivos=cargarpositivo/cuantosNumerosPositivos;

			for(i=0;i<10;i++)
			{
				printf("espacio de los numeros ingresados %d y numero ingresado %d\n", i, numeros[i]);
			}
			printf("promedio de los positivos  %2.f \n "
					"el menor de los negativos %d\n",promedioPositivos ,menorNegativo );
	return EXIT_SUCCESS;
}

