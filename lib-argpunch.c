#include "lib-argpunch.h"

int GetMaxArgumentLength( int argumentsCount, char *arguments[] )
{
	int largestSize = 0;
	if ( argumentsCount > 1 )
	{
		for ( int i = 1; i <=  argumentsCount; i++ )
		{
			if ( strlen( arguments[ i ] ) > largestSize )
			{
				largestSize = strlen( arguments[ i ] );
			}
		}
	}
	return largestSize;
}

int GetArgumentValue( char expectedArgument[], int argumentsCount, char *arguments[], int buff, char *argumentValue )
{
	if ( argumentsCount > 1 )
	{
		for ( int i = 1; i < argumentsCount; i++ )
		{
			if ( !strcmp( arguments[i], expectedArgument) )
			{
				if ( argumentsCount <= ( i ) )
				{
					argumentValue = NULL;
					return ERR_FAILURE;
				}
				else
				{
					/* we want suppliedArguments[i+1] to end up in the char array main() passed in the last argument */
					strncpy( argumentValue, arguments[ i + 1 ], buff );
					return ERR_SUCCESS;
				}
			}
		}
	}
	/*
		Assume nothing's to be found by default.
		Also make argumentValue garbage-proof.  May not be necessary.
	*/
	argumentValue = NULL;
	return ERR_FAILURE;
}
