#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - create a pointer to a 2 D array of integers.
 *
 * Each element of the grid is initialized to 0
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to 2D array on succes
 *  and  NUll on failure, or on negative value
 **/

int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(a[j]);
			}

			free(a);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			a[k][l] = 0;
		}
	}

	return (a);
}
