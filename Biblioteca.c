#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"


char main (void)
{
	char resultado;
	char caracter;
	resultado = getChar (&caracter, "Ingrese un caracter:\n");
	printf("El caracter ingresado es: %c" ,resultado);

		return EXIT_SUCCESS;
}
