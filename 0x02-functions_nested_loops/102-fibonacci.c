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
	long int i, x1 = 1, x2 = 2, sum;

	printf("1, 2");
	for (i = 0; i < 48; i++)
	{
		sum = x1 + x2;
		printf(", %ld", sum);
		x1 = x2;
		x2 = sum;
	}
	printf("\n");
	return (0);
}
