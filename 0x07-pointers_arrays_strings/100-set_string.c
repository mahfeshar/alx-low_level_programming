#include "main.h"

/**
* set_string - sets the value of a pointer to a char
* @s: pointer to string
* @to: string to change to
*/

void set_string(char **s, char *to)
{
	*s = to;
}
