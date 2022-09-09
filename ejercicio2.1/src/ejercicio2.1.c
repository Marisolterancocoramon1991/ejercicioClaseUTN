/*
 ============================================================================
 Name        : 1.c
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

	int numero;
	int pares;
	pares=0;
	int impares;
	impares=0;
	int menorNumero;
	menorNumero=0;
	int parMayor;
	parMayor=0;
	int sumaPositivos;
	sumaPositivos=0;
	int productoNegativo;
	productoNegativo=1;
	int bandera=1;

	for(int i=0;i<10;i++)
	{
		do
		{
			printf("numero ingresado");
			scanf("%d",&numero);
			fflush(stdin);
		}while(numero==0);

		if(numero%2==0)
		{
			pares++;
			if(bandera==1)
			{
				parMayor=numero;
				bandera=0;
			}else
			{
				if(parMayor<numero)
				{
					parMayor=numero;
				}
			}

		}else
		{
			impares++;
		}

		if(menorNumero>numero)
		{
			menorNumero=numero;
		}
		if(numero>0)
		{
			sumaPositivos+=numero;
		}else
		{
			productoNegativo*=numero;
		}
	}

	printf("pares %d, imapares %d "
			"menor numero %d \n"
			"par mayor %d, suma de positivos %d"
			"\n producto de los negativos %d"
			,pares,impares,menorNumero,parMayor,sumaPositivos,productoNegativo);

	return EXIT_SUCCESS;
}
