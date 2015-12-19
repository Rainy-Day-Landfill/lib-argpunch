#ifndef __LIB_ARGPUNCH__
#define __LIB_ARGPUNCH__ 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERR_SUCCESS 0
#define ERR_FAILURE 1

#define FALSE 0
#define TRUE 1

/*
TODO:
	remove requirement for all parameters for this function,
	treating argumentsCount and arguments[] supplied to the
	entry point as a global?  Need to consider options for
	approach.
*/
int GetMaxArgumentLength( int argumentsCount, char *arguments[] );

/*
TODO:
	reduce to:
		GetArgumentValue(char expectedArgument[], char *output);
*/
int GetArgumentValue( char expectedArgument[], int argumentsCount, char *arguments[], int buff, char *argumentValue );

#endif

