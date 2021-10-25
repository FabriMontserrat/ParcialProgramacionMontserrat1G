/*
 ============================================================================
 Name        : ParcialProgramacion.c
 Author      : Fabrizio Montserrat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void) {
	setbuf(stdout,NULL);
	int a;
	float aumento;

	printf("ingrese un numero\n");
	scanf("%d",&a);
	fflush (stdin);
	aumento=aplicarAumento(a);
	printf("El precio con aumento es: %f",aumento);

}

