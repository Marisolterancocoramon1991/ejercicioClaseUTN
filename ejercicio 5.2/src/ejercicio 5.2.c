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
void compararNumeroRepetitivoVector(int array[] , int len);

int main(void)
{

	setbuf(stdout, NULL);
	int numeros[10];
	int i=0;
	int positivos;
	positivos=0;
	int negativos;
	negativos=0;
	int sumatoriaPares;
	sumatoriaPares=0;
	//int conteoPares;
	int mayorImpar;
	//int x;
	//int listadoImpares[x];

	for(i=0;i<10;i++)
	{

		printf ("ingrese numero -100 al 100");
		scanf("%d", &numeros[i]);

		while(numeros[i]<-100 || numeros[i]>100)
			{
				printf("ingrese numero -100 al 100");
				scanf("%d", &numeros[i]);

			}

		if(numeros[i]>0)
		{
			positivos++;
		}else
		{

			negativos++;
		}

	}

	for(i=0; i<10;i++)
	{
				printf("imprimir numero %d\n", numeros[i]);

	}
	for(i=0; i<10;i++)
	{
		if(numeros[i]%2==0)
		{
			printf("imprimir numero pares %d\n",  numeros[i]);
			sumatoriaPares+=numeros[i];

		}else
		{
			printf("imprimir numero impares %d\n",  i);

			if(numeros[i]>mayorImpar )
			{
				mayorImpar=numeros[i];
			}

		}
	}

	printf("numero impar mayor %d\n"
			"y la sumatoria de los pares es %d\n", mayorImpar, sumatoriaPares );

	printf("cantidad de numeros positivos %d y negativos %d\n",positivos, negativos );

	compararNumeroRepetitivoVector( numeros , 10);

	return EXIT_SUCCESS;
}

void compararNumeroRepetitivoVector(int array[] , int len)
{
	int i;
	int k;

	if(array != NULL && len > 0)
	{
		for(i=0; i< len; i++)
		{

			for(k=0; k< 100; k++)
			{

				if(array[i]==array[k])
				{
					printf ("comparacion %d\n",array[i] );
				}

			}



		}

	}

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
