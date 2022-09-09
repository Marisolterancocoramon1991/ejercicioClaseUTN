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

int sumaDeEnteros (int , int );
int numeroPar(int );
int pedirEntero(void);
int Sumar2(void);

int main(void) {

	setbuf(stdout, NULL);

	int primerNumero;
	int segundoNumero;
	int sumarMain;
	int parImpar;
	int numeroEntero;
	int sumar2Funcion;

	printf("primer numero");
	scanf("%d",&primerNumero);
	fflush(stdin);

	printf("segundo numero");
	scanf("%d",&segundoNumero);
	fflush(stdin);

	numeroEntero= pedirEntero();
	printf("%d\n",numeroEntero);

	sumarMain=sumaDeEnteros(primerNumero, segundoNumero);
	parImpar=numeroPar( sumarMain);
	sumar2Funcion=Sumar2();

	printf("suma de numneros enteros %d y el numero es par si sale 1 o impar si sale 0 %d\n"
			"sumar segunda funcion %d",
			sumarMain,parImpar,sumar2Funcion);

	return EXIT_SUCCESS;

}

int sumaDeEnteros (int numeroUno, int numeroDos)
{
	int suma;

	suma=numeroUno+numeroDos;

	return suma;
}

int numeroPar(int resultado)
{
	int retorno;
	if(resultado%2==0)
	{
		retorno=1;
	}else
	{
		retorno=0;
	}
	return retorno;
}

int pedirEntero(void)
{
	int entero;
	printf("numero entero");
	fflush(stdin);
	scanf("%d",&entero);
	return entero;

}
int Sumar2(void)
{
	int numero1;
	int numero2;
	int suma;
	printf("numero uno");
	fflush(stdin);
	scanf("%d",&numero1);
	printf("numero dos");
	fflush(stdin);
	scanf("%d",&numero2);
	suma=numero1+numero2;

	return suma;

}
