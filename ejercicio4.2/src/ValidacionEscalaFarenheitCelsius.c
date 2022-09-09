
#include <stdio.h>
#include <stdlib.h>

int validacionTemperatura (int* temperatura)
{
	int retorno=0;
	char tipoEscalaFahrenheitCelsius;
	int temperaturaValidacion;

	printf("tipo de escala para Fahrenheit f y para celsius c \n");
	scanf("%c", &tipoEscalaFahrenheitCelsius);


	if(tipoEscalaFahrenheitCelsius=='f'  ||  tipoEscalaFahrenheitCelsius=='c')
	{
		switch (tipoEscalaFahrenheitCelsius)
		{
			case 'f' :
				printf("ingresar temperatura entre punto de congelacion y ebullicion del agua \n"
						"en grados Fahrenheit se encuentra en los 32º F \n"
						"mientras que el punto de ebullición del agua está en los 212º F \n");

				scanf("%d",  &temperaturaValidacion);


				if(temperaturaValidacion > 31 && temperaturaValidacion < 213)
				{
					*temperatura=temperaturaValidacion;

					retorno=2;
				}

			break;

			case 'c' :

				printf("ingresar temperatura entre punto de congelacion y ebullicion del agua \n"
						"en grados Celsius  0 °C se definió por el punto de congelación del agua y 100 °C \n"
						"se definió por el punto de ebullición del agua \n");
				scanf("%d", & temperaturaValidacion);

				if(temperaturaValidacion > -1 &&  temperaturaValidacion < 101)
				{
					*temperatura=temperaturaValidacion;
					retorno=1;
				}

			break;


		}
	}

	return retorno;

}

