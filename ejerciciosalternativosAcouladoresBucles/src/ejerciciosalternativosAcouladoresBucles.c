/*
 ============================================================================
 Name        : ejerciciosalternativosAcouladoresBucles.c
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

	//Primer programa
	char arraydeletas[10];
	int i;
	int acouladorA;
	acouladorA=0;
	int acouladore;
	acouladore=0;
	int acomuladorI;
	acomuladorI=0;
	int acomuladorO;
	acomuladorO=0;
	int acouladorU=0;

	for(i=0;i<10;i++)
	{
		printf("ingresar vocales en la consola\n");
		scanf("%c",&arraydeletas[i]);

		while(!(arraydeletas[i]!='a' || arraydeletas[i]!='e' || arraydeletas[i]!='i'|| arraydeletas[i]!='o' || arraydeletas[i]!='u'))
		{
			printf("le pifiaste, ingresar vocales en la consola\n");
			scanf("%c",&arraydeletas[i]);

		}
		switch(arraydeletas[i])
		{
		case 'a':
			acouladorA++;
		break;

		case 'e':
			acouladore++;
		break;

		case 'i':
			acomuladorI++;
		break;
		case 'o':
			acomuladorO++;
		break;
		case 'u':
			acouladorU++;
		break;

		}


	}

	printf("cuantas a %d, e %d; i %d, o %d,, u %d \n",acouladorA,acouladore, acomuladorI,
			acomuladorO, acouladorU);



	//segundo programa

	  int imapres=0;
	  int pares=0;

		for(i=0; i<100;i++)
		{
			if(i%2!=0)
			{
				imapres++;
				printf("%d\n",i);
			}
		}
		for(i=0; i<100;i++)
		{
			if(i%2==0)
			{
				pares++;
				printf("%d\n",i);
			}
				}
		printf("\n el nuero de impares es %d\n"
				"numeros pares ees %d",imapres, pares);

		for(i=100;i>0;i--)
		{
		    	printf("\n conteo regresivo %d", i);
		}
		int suma=0;

		int mulltiplos;

		 for(i=0; i<100;i++)
		{
			 suma+=i;
			 mulltiplos=6*i;

			 printf("\n conteo %d y la suma en serie es %d\n %d", i, suma, mulltiplos);
		}

		 // tercer ejercicio

	 int sumaPositivos=0;
	 int prductoNegativo=1;
	 int numeroIngresar;

	 for(i=0;i<10;i++)
	 {
		 printf("ingresar un numero ecepto el 10");
		 scanf("%d", &numeroIngresar);
		 while(numeroIngresar==0)
		 {
			printf("ingresar un numero ecepto el 10");
		   	scanf("%d", &numeroIngresar);
		 }

		 if(numeroIngresar<0)
		 {
			 prductoNegativo*=numeroIngresar;
		 }else
		 {
			 sumaPositivos+=numeroIngresar;
		 }
	 }

	 printf("multiplicacion de negatvs %d y la suma de los positvos %d"
			,prductoNegativo, sumaPositivos);

	 int nummeroingresar5;

	 printf("ingresar nuero");
	 scanf("%d", &nummeroingresar5);

	  int sumaAntecedente=0;

	  for(i=0; i<nummeroingresar5+1; i++)
	  {
	    sumaAntecedente+=i;
	  }
	  printf("la suma de los numeros antecedentes que ingreso es %d",sumaAntecedente);

	  int numero1;
	  int numero2;
	  int x;
	  int z;

	  printf("ingresar numero 1");
	  scanf("%d",&numero1);
	  printf("ingresar numero 2");
	  scanf("%d",&numero2);
	  printf("primer numero %d segundo numero %d\n",numero1, numero2);

	  x=numero1;
	  z=numero2;
	  numero1=z;
	  numero2=x;

	  printf("primer numero %d segundo numero %d despues de la converion\n",numero1, numero2);


	return EXIT_SUCCESS;
}


