#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - prints numbers, followed by a new line
* @separator: the string to be printed between numbers
* @n: the number of integers passed to the function
* @...: parameters
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;

	va_start(pa, n);
	for (i = 0; i < n; i++)
	{
		if (separator && i)
			printf("%s", separator);
		printf("%d", va_arg(pa, int));
	}
	va_end(pa);
	printf("\n");
}
