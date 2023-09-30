#include "variadic_functions.h"

/**
* sum_them_all - the sum of all its parameters.
* @n: number of parameters
* @...: parameters
* Return: the sum of parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list pa;

	va_start(pa, n);
	for (i = 0; i < n; i++)
		sum += va_arg(pa, int);

	va_end(pa);
	return (sum);
}
