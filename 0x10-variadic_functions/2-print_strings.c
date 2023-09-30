#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of parameters
 * @...: parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;
	char *str;

	va_start(pa, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(pa, char*);
		if (separator && i)
			printf("%s", separator);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
	}
	va_end(pa);
}
