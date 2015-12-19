#include <stdio.h>
#include "lib-argpunch.h"

// assembly entry point
int main( int argumentsCount, char *arguments[] )
{
	char argumentValue[ GetMaxArgumentLength( argumentsCount, arguments) ];

	/*
		This is a Demo for lib-argpunch implementation.

		Need some sort of object to store config and iterate through maybe?
			How will the user build their app?
			How will we associate code-flow with arguments and their values?
				Key/Value pairs?
			Maybe a struct with four arrays:  optional, required, valued, non-valued?

		Reqirements:
		1.  Let's make it easy and fast to setup.
		2.  Do NOT use getopt or argp.
		3.  Do NOT go platform-dependent.
	*/

	if ( !GetArgumentValue( "-o", argumentsCount, arguments, sizeof(argumentValue), argumentValue ) )
	{
		printf("Argument -o value:\t%s\n", argumentValue);
	}
	else
	{
		printf("Could not retrieve value for -o\n");
	}
	return EXIT_SUCCESS;
}
