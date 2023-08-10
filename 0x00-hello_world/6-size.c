#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	prinf("Size of a char: %u byte(s)", sizeof(char));
	prinf("Size of an int: %u byte(s)", sizeof(int));
	prinf("Size of a long int: %u byte(s)", sizeof(long int));
	prinf("Size of a long long int: %u byte(s)", sizeof(long long int));
	prinf("Size of a float: %u byte(s)", sizeof(float));
	return (0);
}
