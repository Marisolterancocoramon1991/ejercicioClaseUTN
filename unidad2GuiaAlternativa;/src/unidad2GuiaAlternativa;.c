/*
 ============================================================================
 Name        : unidad2GuiaAlternativa;.c
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


    int peso;
	char validacion;
	int persoMenor81kg;
	persoMenor81kg=0;
	int persoMayor81kg;
	persoMayor81kg=0;

	    do
	    {
		    printf("ingresar peso\n");
		    scanf("%d", &peso);

		    if(peso<80)
    		{
    			persoMenor81kg++;

    		}else
    		{

    			persoMayor81kg++;
    		}
	    	printf(" quieres seguir iterando\n");
    		fflush(stdin);
    		scanf("%s",&validacion);




	   }while(validacion=='s');

	printf("personas menor a 80KG %d mayor a 80 KG %d\n",persoMenor81kg,persoMayor81kg);

	int arrayVendedores[3]={1,2,3};
		int i=0;
		int importe;
		float acomulador1;
		acomulador1=0;
		float acomulador2=0;
		float acomulador3=0;
		char Val='s';
		float proedio1;
		float promedio2;
		float promedio3;

		while (Val =='s')
		{
			do
			{
				printf("numero de vendedor");
				scanf("%d",&arrayVendedores[i]);
				printf(" el importe de la boleta es ");
				scanf("%d",&importe);
			}while(!(arrayVendedores[i]==1 ||arrayVendedores[i]==2 ||arrayVendedores[i]==3));

			switch(arrayVendedores[i])
			{
				case 1:
					acomulador1+=importe;
				break;

				case 2:
					acomulador2+=importe;
				break;

				case 3:
					acomulador3+=importe;
				break;
			}
			do
			{

				printf("quiere seguir iterando");
				scanf("%s",&Val);

			}while(!(Val=='s' || Val=='n'));
		}

		proedio1=acomulador1 *0.05;
		promedio2=acomulador2 *0.05;
		promedio3=acomulador3 * 0.05;

		printf("se informa el 5 por ciento de venta de cada trabajador, el primero\n %f"
				"el segundo %f y el tercero %f",proedio1,promedio2,promedio3);
	return EXIT_SUCCESS;
}


