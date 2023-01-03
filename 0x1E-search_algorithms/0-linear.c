#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: array of integer
 * @size: size of arrray
 * @value: value research
 *
 * Return: the index where value appears in the array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (*(array + i) == value)
			{
				printf("value checked array[%d] = [%d]", i, *(array + i));
				return (i);
			}
		}
	}
	return (-1);
}
