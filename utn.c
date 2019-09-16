#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"

#define EXIT_ERROR -1


/*Funcion que pide un numero entero
 *
 */
int getInt (int *resultado, char *mensaje, char *mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = EXIT_ERROR;
	int buffer;

	if (resultado!=NULL && mensaje!=NULL && mensajeError!=NULL && minimo<maximo && reintentos>=0)
	{
		do
		{
			printf("%s", mensaje);
			__fpurge(stdin);
			if (scanf ("%d", &buffer) == 1)
			{
				if (buffer >= minimo && buffer <= maximo)
				{
					retorno = EXIT_SUCCESS;
					*resultado = buffer;
					break;
				}
			}
			printf (mensajeError);
			reintentos--;

		}while (reintentos >=0);
	}
return retorno;
}

/*Funcion que pide un Float
 *
 */
float getFloat (float *resultado, char *mensaje, char *mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = EXIT_ERROR;
	float buffer=0;
	if (resultado!=NULL && mensaje!=NULL && mensajeError!=NULL && minimo<maximo && reintentos>=0)
	{
		do
		{
			printf("%s", mensaje);
			__fpurge(stdin);
			if (scanf("%f", &buffer)==1)
			{
				if (buffer >= minimo && buffer <= maximo)
				{
					*resultado = buffer;
					retorno = EXIT_SUCCESS;
					break;
				}
			}
			printf (mensajeError);
			reintentos--;
		}while (reintentos >= 0);
	}
return retorno;
}

/*Funcion que pide un caracter
 *
 */
char getChar (char *caracter, char *mensaje)
{
	int retorno = 0;

	if (mensaje != NULL)
	{
		printf ("%s", mensaje);
		__fpurge(stdin);
		scanf ("%c", &caracter);
		return caracter;
	}else{
		return EXIT_ERROR;
		}
	return retorno;
}
