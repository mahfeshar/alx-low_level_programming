#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: first str
 * @src: second str
 * @n: number of letters
 *
 * Return: dest string after copying
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
