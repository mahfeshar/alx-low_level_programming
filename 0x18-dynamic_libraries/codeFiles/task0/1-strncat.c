#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: first str
 * @src: second str
 * @n: number of letters
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	for (; j < n && src[j]; j++, i++)
		dest[i] = src[j];

	return (dest);
}
