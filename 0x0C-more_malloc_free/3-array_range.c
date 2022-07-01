#include <stdlib.h>

/**
 * array_range - allocate memory for an array of integer whose size is max -min
 * @min: mininum
 * @max: maximum
 *
 * Return: the pointer to the new space of memory allocated
 * Or NULL if allocation failed
 */
int *array_range(int min, int max)
{
	int i = 0;

	int *ptr = NULL;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1);
	if (ptr)
		for (i = min; i <= max; i++)
			*(ptr + i) = i;
	return (ptr);
}
