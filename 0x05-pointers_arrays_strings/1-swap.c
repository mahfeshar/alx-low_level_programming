#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: pointer for the first int
 * @b: pointer for the second int
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
