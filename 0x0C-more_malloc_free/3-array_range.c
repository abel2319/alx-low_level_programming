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
	int i, n;
	int *ptr;

	if (min > max)
		return ('\0');

	n = (max - min) + 1;
	ptr = malloc(sizeof(int) * n);

	if (ptr == NULL)
		return ('\0');

	for (i = 0; i < n; i++)
		ptr[i] = min + i;

	return (ptr);
}
