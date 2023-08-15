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
	long int i, x1 = 1, x2 = 2, s = 3;
	long long int sum = 3;

	while (x2 <= 4000000)
	{
		s = x1 + x2;
		sum += s;
		x1 = x2;
		x2 = s;
	}
	printf("%lld\n", sum);
	return (0);
}
