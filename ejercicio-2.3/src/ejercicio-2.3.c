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

int main(void) {

	setbuf(stdout, NULL);

	int numeroIteracion;
	numeroIteracion=0;
	int NumeroCliente;
	char estadoCivil;
	int edad;
	int temperaturaCorporal;
	char generoCliente;
	int precioXPasajero=600;
	int CantidadMujerSolteraMasJoven;
	CantidadMujerSolteraMasJoven=0;
	int edadMujerSolteraMasJoven;
	edadMujerSolteraMasJoven=0;
	int viudoMas60;
	int precioTotalSinDescuento;
	int quieresSeguir;
	quieresSeguir=1;
	int CantidadPersonasM60;
	CantidadPersonasM60=0;
	float promedioMitadPersonas;
	float precioDescuento;


	while(quieresSeguir == 1 && numeroIteracion<100)
	{
		do
		{
			printf("numero de cliente, no menor a 1000");
			scanf("%d",&NumeroCliente);
			fflush(stdin);

		}while(NumeroCliente<1000 || NumeroCliente!=NumeroCliente);

		do
		{
			printf("estado civil 's' para soltero, 'c' para casado o 'v' viudo");
			scanf("%c",&estadoCivil);
			fflush(stdin);
		}while(estadoCivil!='s' && estadoCivil!='c' && estadoCivil!='v');

		do
		{
			printf("edad del usuario, debe ser mayor de edad");
			scanf("%d",&edad);
			fflush(stdin);
		}while(edad<17);

		do
		{
			printf("temperatura corporal, expresada en Centigrados, entre 35 g y 41 g");
			scanf("%d",&temperaturaCorporal);
			fflush(stdin);
		}while(temperaturaCorporal<35 || temperaturaCorporal>41);

		do
		{
			printf("genero del cliente 'f' para femenino, 'm' para masculino, 'o' para no binario");
			scanf("%c",&generoCliente);
			fflush(stdin);
		}while(generoCliente!='f' && generoCliente!='m' && generoCliente!='o');


			switch(generoCliente)
			{
				case 'f':

					switch(estadoCivil)
					{
						case's':
							CantidadMujerSolteraMasJoven++;
							edadMujerSolteraMasJoven=edad;
							if(edadMujerSolteraMasJoven<edad)
							{
								edadMujerSolteraMasJoven=edad;
							}
						break;
					}
				break;
				case 'm':
					switch(estadoCivil)
					{
						case'v':
							if(edad>=60)
							{
								viudoMas60++;
							}
						break;
					}
				break;
			}

			if(edad>60)
			{
				CantidadPersonasM60++;

			}

		numeroIteracion++;
		printf("quieres seguir con la interacion, para si 1 ");
		scanf("%d",&quieresSeguir);
		fflush(stdin);
	}

	precioTotalSinDescuento=precioXPasajero*numeroIteracion;

	promedioMitadPersonas=numeroIteracion/100*50;

	if(promedioMitadPersonas<CantidadPersonasM60)
	{
		precioDescuento=precioTotalSinDescuento*0.85;
	}else
	{
		precioDescuento=0;
	}


	printf("La cantidad de personas con estado  civil viudo de más de 60 años %d\n"
			"cantidad de mujeres solteras %d"
			"edad de la mujer soltera más joven %d\n"
			"cuánto sale el viaje total sin descuento %d"
			,viudoMas60,CantidadMujerSolteraMasJoven,edadMujerSolteraMasJoven,
			precioTotalSinDescuento);

	return EXIT_SUCCESS;
}
