#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *
 * @str: string
 *
 * Return: If str = NULL Otherwise pointer
 */
char *_strdup(char *str)
{
	char *str2;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	str2 = malloc(sizeof(char) * (len + 1));

	if (str2 == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		srt2[i] = str[i];

	str2[len] = '\0';

	return (str2);
}
