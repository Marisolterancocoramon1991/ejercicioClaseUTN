/*
 ============================================================================
 Name        : ejerciciosAlternativo30.c
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

		int horaValor;
		char nonbreEmpleado[25];
		int horasTrabajadas;
		int antiguedad;
		int sueldoPorMes;
		int gananciaAntiguedad;
		int sueldoBruto;
		int sueldoDescuento;


		printf("ingresar el valor por hora del trabajador\n");
		scanf("%d", &horaValor);

		printf("ingresar nobre del empleado\n");
		scanf("%s", nonbreEmpleado);

		printf("antiguedad por año");
		scanf("%d",&antiguedad);

		printf("ingresar horas de trabajo al mes\n");
		scanf("%d", &horasTrabajadas);

		sueldoPorMes=horaValor*horasTrabajadas;

		gananciaAntiguedad=antiguedad*30;

		sueldoBruto=sueldoPorMes+	gananciaAntiguedad;

		sueldoDescuento=sueldoBruto*0.87;

		printf("nombre es : %s \n antiguedad del empleado es %d años\n"
				"el valor por hora trabajadas es %d\n"
				"sueldo en bruto %d"
				"sueldo con os descuentos %d"
				,nonbreEmpleado,antiguedad,horaValor,sueldoBruto,sueldoDescuento);

	return EXIT_SUCCESS;
}
/*Por teclado se ingresa el valor hora de un empleado. Posteriormente se ingresa
el nombre del empleado, la
antigüedad y la cantidad de horas trabajadas en el mes. Se pide calcular el
importe a cobrar teniendo en
cuenta que el total resulta de multiplicar el valor hora por la cantidad
de horas trabajadas, hay que sumarle
la cantidad de años trabajados multiplicados por $30, y al total de todas
esas operaciones restarle el 13% en
concepto de descuentos. Imprimir el recibo correspondiente con el nombre,
la antigüedad, el valor hora, el
total a cobrar en bruto, el total de descuentos y el valor neto a cobrar*/
