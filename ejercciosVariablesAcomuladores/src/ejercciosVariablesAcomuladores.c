/*
 ============================================================================
 Name        : ejercciosVariablesAcomuladores.c
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

	int arraysNuero[5];
	int i;
	float promedio;
	float acomulador;
	acomulador=0;
	int suma;
	float producto;

	for(i=0;i<2;i++)
	{
		do
		{
		printf("pedir numero %d  \n", i+1);
		scanf("%d",&arraysNuero[i]);
		}while(arraysNuero[i]==0);

		acomulador+=arraysNuero[i];
	}

	for(i=2;i<5;i++)
		{
			printf(" \n pedir numero en el segundo for %d  \n", i+1);
			scanf("%d",&arraysNuero[i]);

			acomulador+=arraysNuero[i];
		}

	promedio= acomulador/i;
	suma= arraysNuero[0]+arraysNuero[1];
	producto=arraysNuero[0]*arraysNuero[1];

	printf(" \nel promedo de los numeros ingreados es %f, ademas la suma de "
			"los dos primeeros numeros es %d \n y "
			"el producto es %f \n",
			promedio,suma, producto);

	int arraysSegundoNumero[2];
	int restaOperacion;

	for(i=0;i<2;i++)
	{
		printf(" \nnuero %d para realizar la operacion resta \n", i+1);
		scanf("%d", &arraysSegundoNumero[i]);
	}

	restaOperacion=	arraysSegundoNumero[0]-arraysSegundoNumero[1];

	if(restaOperacion<0)
	{
		printf("el resultado de la resta es %d y el valor es negativo \n",restaOperacion);
	}else
	{
		printf("el resultado de la resta es %d y el valor es positivo \n",restaOperacion);
	}

	int numeroAElevarCuadraro;
	int elevararCuadrado;

	printf("ingresa numero mayor a cero \n");
	scanf("%d",&numeroAElevarCuadraro);
	while(numeroAElevarCuadraro<=0)
	{
		printf("le pifiaste, ingresa numero mayor a cero \n");
		scanf("%d",&numeroAElevarCuadraro);
	}
	elevararCuadrado=numeroAElevarCuadraro*numeroAElevarCuadraro;
	printf(" numero elevado al cuadrado es %d \n", elevararCuadrado);

	int arrraNumerooDiez[10];
	int acouladorNegativo;
	acouladorNegativo=0;
	int acomuladorPositivo;
	acomuladorPositivo=0;

	for(i=0;i<10;i++)
	{
		printf("nueros a ingresar son 10 y vamos por el %d\n",i+1);
		scanf("%d",arrraNumerooDiez);
	    if(arrraNumerooDiez[i]<0)
	    {
		    acouladorNegativo++;
	    }else
	    {
		        acomuladorPositivo++;;
	    }

	}

	printf("se ingresaron %d nueros negativos y se ingresaron %d positvos\n",
			acouladorNegativo,acomuladorPositivo);

	int radioCirculo;
	float PI=3.14;
	float hallarAreas;
	float hallarLongtd;

	printf("ingresa el radio de la cirrcunferencia \n");
	scanf("%d",&radioCirculo);

	hallarLongtd=(2*PI)*radioCirculo;
	hallarAreas= PI*(radioCirculo*radioCirculo);

	printf("el area de la circunferencia es %2.f \n"
			"a longitud de la circunferencia %2.f\n",
			hallarAreas,hallarLongtd);
	return EXIT_SUCCESS;
}




