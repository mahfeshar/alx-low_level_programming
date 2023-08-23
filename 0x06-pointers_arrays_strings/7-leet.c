#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @str: string input
 *
 * Return: string after encodes it
 */

char *leet(char *str)
{
	int i = 0, j;
	char let[] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (j = 0; j < 8; j++)
			if (str[i] == let[j] ||
				str[i] - 32 == let[j])
				str[i] = j + '0';
		i++;
	}
	return (str);
}
