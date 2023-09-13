#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: the array of elements
 * @size: size of array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: If no element matches or If size <= 0, return -1
 *		else return the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL)
		return (-1);
	for (; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
