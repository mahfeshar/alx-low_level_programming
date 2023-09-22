#include "main.h"
/**
 *_memcpy - function copies n bytes from memory area src to memory area dest
 *
 *@dest: copied to
 *@src: copied from
 *@n: number of bytes
 *
 *Return: returns a pointer to n
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
