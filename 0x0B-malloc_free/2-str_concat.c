#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 *
 * @s1: first string
 * @s2: The second string
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, str_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	str = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[str_index++] = s1[i];

	for (i = 0; s2[i]; i++)
		str[str_index++] = s2[i];

	return (str);
}
