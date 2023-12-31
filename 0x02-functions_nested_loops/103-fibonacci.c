#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	long int x1 = 1, x2 = 2, s = 3, sum = 2;

	while (x2 <= 4000000)
	{
		s = x1 + x2;
		if (s % 2 == 0)
			sum += s;
		x1 = x2;
		x2 = s;
	}
	printf("%ld\n", sum);
	return (0);
}
