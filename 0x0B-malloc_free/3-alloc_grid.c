#include <stdlib.h>
#include "main.h"
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the matrix.
 * @height: height of the matrix.
 * Return: pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **dmarray;
	int l = 0;
	int h = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	dmarray = malloc(height * sizeof(int *));
	if (dmarray == NULL)
	{
		return ('\0');
	}
	for (l = 0; l < height; l++)
	{
		dmarray[l] = malloc(width * sizeof(int));
		if (dmarray[l] == NULL)
		{
			for (h = 0; h < height; h++)
			{
				free(dmarray[h]);
			}
			free(dmarray);
			return ('\0');
		}
	}
	for (l = 0; l < height; l++)
	{
		for (h = 0; h < width; h++)
		{
		dmarray[l][h] = 0;
		}
	}
	return (dmarray);
}
