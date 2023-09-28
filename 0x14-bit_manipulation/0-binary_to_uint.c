#include "main.h"
/**
 * len - function to know length
 * @b: string
 * Return: length for string
 */
unsigned int len(const char *b)
{
	unsigned int i;

	for (i = 0; b[i]; i++)
		;
	return (i);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, n, x, pow = 1;
	int i;

	if (b == NULL)
		return (0);
	n = len(b);
	for (i = n - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		x = b[i] - '0';
		if (x == 1)
			sum += pow;
		pow *= 2;
	}
	return (sum);
}
