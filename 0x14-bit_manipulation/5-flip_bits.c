#include "main.h"

/**
 * flip_bits - flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	int cnt = 0;

	while (num > 0)
	{
		if (num & 1)
			cnt++;
		num >>= 1;
	}
	return (cnt);
}
