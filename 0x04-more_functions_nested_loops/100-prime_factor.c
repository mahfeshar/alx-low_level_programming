#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long num = 612852475143, i;

	while (i < (num / 2))
	{
		if ((num % 2) == 0)
		{
			num /= 2;
			continue;
		}

		for (i = 3; i < (num / 2); i += 2)
		{
			if ((num % i) == 0)
				num /= i;
		}
	}
	printf("%ld\n", num);
	return (0);
}
