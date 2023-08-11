#include <stdio.h>
#include <stdbool.h>

/**
 * main - Entry point
 *
 * Description: printing all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;
	int j;
	bool first_digit = true;

	for (; i < 99; i++)
	{
		j = i + 1;
		for (; j <= 99; j++)
		{
			if (!first_digit)
			{
				putchar(',');
				putchar(' ');
			}
			first_digit = false;
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
		}
	}
	putchar('\n');
	return (0);
}
