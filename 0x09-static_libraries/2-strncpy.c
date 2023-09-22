#include "main.h"
#include <string.h>
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
	int len = strlen(src);

	for (; i < n; i++)
		dest[i] = src[i];

	for (i = len; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
