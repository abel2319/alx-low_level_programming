#include <stdlib.h>

/**
 * alloc_grid - build a grid of int(like a matrix)
 * @width: number of columns
 * @height: number of rows
 *
 * Return: Pointer to the grid [width, height]
 * Or NULL if somethings goes wrong
 */
int **alloc_grid(int width, int height)
{
	int **ptr = NULL;
	int i = 0;
	int j = 0;

	if (height != 0 && width != 0)
	{
		ptr = malloc(sizeof(int *) * height);
		if (ptr)
		{
			for (i = 0; i < height; i++)
			{
				ptr[i] = malloc(sizeof(int) * width);
				if (!ptr[i])
				{
					for (j = 0; j < i; j++)
						free(ptr[j]);
					free(ptr);
					return (NULL);
				}
			}
			for (i = 0; i < height; i++)
				for (j = 0; j < width; j++)
					ptr[i][j] = 0;
		}
	}
	return (ptr);
}
