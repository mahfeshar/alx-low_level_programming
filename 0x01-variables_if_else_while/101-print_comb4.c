#include <stdio.h>
#include <stdbool.h>

/**
 * main - Entry point
 *
 * Description: printing all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;
	int j;
	int x;
	bool first = true;

	for (; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (x = j + 1; x <= 9; x++)
			{
				if (!first)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(i + '0');
				putchar(j + '0');
				putchar(x + '0');
				first = false;
			}
		}
	}
	putchar('\n');
	return (0);
}
