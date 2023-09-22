#include "main.h"

/**
 *_memset - function fills the first n bytes of the memory area
 *pointed to by s with the constant byte b
 *
 *@s:target
 *@b: constant byte
 *@n:number of byte
 *
 *Return: returns new value of target
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (; n; n--)
		s[n - 1] = b;
	return (s);
}
