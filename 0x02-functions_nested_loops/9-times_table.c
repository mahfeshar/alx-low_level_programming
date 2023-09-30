#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i, j, num;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			num = i * j;
			if (num > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(num / 10 + '0');
				num %= 10;
				_putchar(num + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(i * j + 48);
			}
		}
		_putchar('\n');
	}
}
