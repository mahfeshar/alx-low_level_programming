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
	unsigned long int x_1, x_2, y_1, y_2, s_1, s_2;

	for (i = 0; i < 92; i++)
	{
		sum = x + y;
		printf("%lu, ", sum);

		x = y;
		y = sum;
	}

	x_1 = x / 10000000000;
	x_2 = x % 10000000000;
	y_1 = y / 10000000000;
	y_2 = y % 10000000000;

	for (; i < 98; i++)
	{
		s_1 = y_1 + x_1;
		s_2 = y_2 + x_2;
		if (y_2 + x_2 > 9999999999)
		{
			s_1 += 1;
			s_2 %= 10000000000;
		}

		printf("%lu%lu", s_1, s_2);
		if (i != 97)
			printf(", ");

		x_1 = y_1;
		x_2 = y_2;
		y_1 = s_1;
		y_2 = s_2;
	}
	printf("\n");
	return (0);
}
