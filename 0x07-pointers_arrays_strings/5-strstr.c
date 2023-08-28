#include "main.h"

/**
*_strstr -  locates a substring
*
*@haystack: string where the search is made
*@needle: string whose occurence is searched in haystack
*
*Return:Returns a pointer to the beginning of the located
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		do {
			if (needle[i + 1] == '\0')
				return (haystack);
			i++;
		} while (haystack[i] == needle[i]);

		haystack++;
	}
	return ('\0');
}
