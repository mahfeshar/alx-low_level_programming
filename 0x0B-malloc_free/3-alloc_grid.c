#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array
 *
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **tD;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	tD = malloc(sizeof(int *) * height);

	if (tD == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		tD[h] = malloc(sizeof(int) * width);

		if (tD[h] == NULL)
		{
			for (; h >= 0; h--)
				free(tD[h]);

			free(tD);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			tD[h][w] = 0;
	}

	return (tD);
}
