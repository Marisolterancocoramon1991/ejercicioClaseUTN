/*
 ============================================================================
 Name        : ejercicioDosSabado.c
 Author      : ker
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int numeroIngresarUsuario(void);
int primedioDosNumerosEntero (int ,int );
int recibeNumeroEntero(int );
int main(void)
{

	setbuf(stdout, NULL);

	int NumeroIngresadoUsuario;
	NumeroIngresadoUsuario=numeroIngresarUsuario();
	int numeroUno;
	int numeroDos;
	int promedioF;
	int numeroEntero;
	int mensajeEntero;
	int bandera=1;
	int acomuladorPositivos;
	acomuladorPositivos=0;
	int cantidadIteraciones=0;
	int promedioNumeroPositivo;
	int acontadordorCero=0;
	int numeronegativomenor=0;
	int bandera2=1;
	int* interaccionesBucleNegativo= &numeronegativomenor;
	int sumaNegativo;

		printf("numero uno a ingresar");
		scanf("%d",&numeroUno);
		fflush(stdin);

		printf("numero dos a ingresar");
		scanf("%d",&numeroDos);
		fflush(stdin);
		promedioF=primedioDosNumerosEntero (numeroUno,numeroDos );

	printf("numero del usuario %d y el promedio es %d \n",NumeroIngresadoUsuario,promedioF);


		printf("numero uno a ingresar\n");
		scanf("%d",&numeroUno);
		fflush(stdin);

		printf("numero dos a ingresar\n");
		scanf("%d",&numeroDos);
		fflush(stdin);
		promedioF=primedioDosNumerosEntero (numeroUno,numeroDos );

	printf("numero del usuario %d y el promedio es %d \n",NumeroIngresadoUsuario,promedioF);


		printf("numero uno a ingresar \n");
		scanf("%d",&numeroUno);
		fflush(stdin);

		printf("numero dos a ingresar \n");
		scanf("%d",&numeroDos);
		fflush(stdin);
		promedioF=primedioDosNumerosEntero (numeroUno,numeroDos );

	printf("numero del usuario %d y el promedio es %d\n",NumeroIngresadoUsuario,promedioF);


		printf("numero uno a ingresar\n");
		scanf("%d",&numeroUno);
		fflush(stdin);

		printf("numero dos a ingresar\n");
		scanf("%d",&numeroDos);
		fflush(stdin);
		promedioF=primedioDosNumerosEntero (numeroUno,numeroDos );

	printf("numero del usuario %d y el promedio es %d\n",NumeroIngresadoUsuario,promedioF);

	for(int i=0;i<10;i++)
	{
		printf("aqui se va a poner un numero entero \n");
		scanf("%d",&numeroEntero);

		mensajeEntero = recibeNumeroEntero( numeroEntero);

		switch (mensajeEntero)
		{
			case 1:
				acomuladorPositivos+=numeroEntero;
				cantidadIteraciones++;
				if(bandera ==1)
				{
					printf("el numero entero es mayor a cero y es positivo %d \n", numeroEntero);
					bandera=0;
				}
				promedioNumeroPositivo=acomuladorPositivos/cantidadIteraciones;
				break;

			case 0:
				acontadordorCero++;
				if(bandera ==1)
				{
					printf("el numero entero es igual a cero y %d  \n", numeroEntero);
					bandera=0;
				}
			break;

			case -1:

				if(bandera2==1)
				{
					numeronegativomenor=numeroEntero;
					bandera2=0;

				}else
				{
					if(numeroEntero<numeronegativomenor)
					{
						numeronegativomenor=numeroEntero;
					}
				}

				if(bandera ==1)
				{
					printf("el numero entero es menor a cero y es negativo %d \n ", numeroEntero);
					bandera=0;
				}
			break;



		}
	}

	while(interaccionesBucleNegativo<0)
	{

		sumaNegativo = numeronegativomenor + (interaccionesBucleNegativo);
		interaccionesBucleNegativo++;

	}
	printf("promedio de numeros positivos %d, contador de numero CERO %d y numero menor negativo %d"
			"y la suma de los numeros negativos %d ",promedioNumeroPositivo,
			acontadordorCero,numeronegativomenor,sumaNegativo);
	return EXIT_SUCCESS;

}
int numeroIngresarUsuario(void)
{
	int numero;
	printf("numero a ingresar \n");
	scanf("%d",&numero);
	fflush(stdin);
	return numero;

}

int primedioDosNumerosEntero (int nume1,int nume2)
{
	int promedio;
	promedio=(nume1+nume2)/2;

return promedio;
}
int recibeNumeroEntero(int numeroENTERO)
{
	int retorno;

	if(numeroENTERO>0)
	{
		retorno=1;
	}else if (numeroENTERO<0)
	{
		retorno=-1;

	}else
	{
		retorno=0;
	}
	return retorno;
}
/*Ejercicio 1:
Crear una función que le solicite al usuario el ingreso de un numero y lo retorne.
Ejercicio 2:
Crear una función que reciba como parámetro dos números enteros, que realice
el promedio de los números y que retorne dicho valor.
Ejercicio 3:
Crear una función que reciba como parámetro un número entero. La función retorna
1 en caso de que sea positivo, -1 en caso de que sea negativo y 0 en caso de que
 sea 0. Realizar la prueba lógica de la función en el main.
Ejercicio 4:
Realizar un programa que permita el ingreso de 10 números enteros.
Determinar:
El promedio de los positivos
La cantidad de ceros
Del menor de los negativos la suma de los antecesores de ese valor (frenar en cero).
Nota:
Utilizar las funciones del punto anterior y desarrollar funciones para resolver
 los procesos que están resaltados*/
