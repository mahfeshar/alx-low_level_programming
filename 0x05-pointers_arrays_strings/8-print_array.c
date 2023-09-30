#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: array of in
 * @n: the number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (i != 0)
			printf(", ");
		printf("%d", a[i]);
	}
	printf("\n");
}
