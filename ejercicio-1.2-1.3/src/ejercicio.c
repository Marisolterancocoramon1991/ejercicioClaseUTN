/*
 ============================================================================
 Name        : ejercicio.c
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

	int numeroUno;
	int numeroDos;
	int numeroTres;
	int nummeroMasGrande;
	int NumeroMedio;
	int numeroMasBajo;
	nummeroMasGrande=0;
	NumeroMedio=0;
	numeroMasBajo=0;
	int suma;


	printf("\ningresar numero uno");
	fflush(stdin);
	scanf("%d", &numeroUno);

	printf("\ningresar numero dos");
	fflush(stdin);
	scanf("%d", &numeroDos);

	printf("\ningresar numero tres");
	fflush(stdin);
	scanf("%d", &numeroTres);

	if((numeroUno>numeroDos && numeroUno<numeroTres))
	{
		nummeroMasGrande=numeroTres;
		NumeroMedio=numeroUno;
		numeroMasBajo=numeroDos;


	}else if(numeroUno>numeroTres && numeroUno<numeroDos )
	{
		nummeroMasGrande=numeroDos;
		NumeroMedio=numeroUno;
		numeroMasBajo=numeroTres;
	}else if(numeroDos>numeroTres && numeroDos<numeroUno)
	{
		nummeroMasGrande=numeroUno;
		NumeroMedio=numeroDos;
		numeroMasBajo=numeroTres;
	}else if (numeroDos>numeroUno && numeroDos<numeroTres)
	{
		nummeroMasGrande=numeroTres;
		NumeroMedio=numeroDos;
		numeroMasBajo=numeroUno;
	}else if (numeroTres>numeroDos && numeroTres<numeroUno)
	{
		nummeroMasGrande=numeroUno;
		NumeroMedio=numeroTres;
		numeroMasBajo=numeroDos;
	}else
	{
		nummeroMasGrande=numeroDos;
		NumeroMedio=numeroTres;
		numeroMasBajo=numeroUno;
	}

	suma= numeroUno+numeroDos+numeroTres;

	printf("\n la suma  es %d, el primer numero es %d \n"
			"el segundo numero es %d, el tecer numero es %d \n"
			"numero mas bajo es %d, numero medio es %d y\n"
			"por ultimo, el numero mas grande es %d"
			,suma ,numeroUno,numeroDos,numeroTres,numeroMasBajo,NumeroMedio,nummeroMasGrande);
	return 0;
}
