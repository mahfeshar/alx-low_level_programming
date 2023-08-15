#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int x = 0, y = 1, sum;

	for (i = 0; i < 92; i++)
	{
		sum = x + y;
		printf("%lu, ", sum);

		x = y;
		y = sum;
	}
	printf("\n");
	return (0);
}
