#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - no time 
 * @separator: no time
 * @n: no time
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	va_start(args, size);

	if (!separator)
		return;
	
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		char *samere = va_arg(args, char *);

		if (samere == NULL)
			printf("(nil)");
		else
			printf("%s", samere);

		if (i < size - 1)
			printf("%s", separator);
	}
	printf("\n");
}


	if (separator)
		return;
	
	for (i
}
