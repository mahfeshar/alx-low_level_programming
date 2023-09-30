#include<stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 1 (Not Success)
*/

int main(void)
{
	int i = 0;
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	while (i <= 57)
	{
		putchar(q[i]);
		i++;
	}
	putchar('\n');
	return (1);
}
