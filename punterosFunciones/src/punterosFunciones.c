/*
 ============================================================================
 Name        : punterosFunciones.c
 Author      : ker
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#include "convertir.h"

int main()
{
    int a;
    a=5;
    int b;
    b=6;
    int retornaSuma;

    printf("el valor de a es %d y el valor de b es %d\n",a,b);
    retornaSuma = convertirVariables(&a,&b);
    printf("el valor de a es %d y el valor de b es %d y la suma de las variables es %d\n", a, b ,retornaSuma);

    return 0;
}


