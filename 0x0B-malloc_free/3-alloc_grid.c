#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **z;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	z = malloc(sizeof(int *) * height);

	if (z == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		z[x] = malloc(sizeof(int) * width);

		if (z[x] == NULL)
		{
			for (; x >= 0; x--)
				free(z[x]);

			free(z);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			z[x][y] = 0;
	}

	return (z);
}
