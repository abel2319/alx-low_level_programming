#include "search_algos.h"


/**
 * print_array - print all elts in array
 * @array: the arrray
 * @size: size of the array
 *
 */
void print_array(int *array, size_t size)
{
	size_t j = 0;

	printf("searching in array: ");
	for (j = 0; j < size - 1; j++)
		printf("%d, ", *(array + j));
	printf("%d\n", *(array + j));
}

/**
 * binary_search - searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: s a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located
 * -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int *tmp = array;
	size_t i = size;

	if (array != NULL)
	{
		while (size > 1)
		{
			i = size / 2;

			print_array(tmp, size);
			if (*(tmp + i) == value)
				return (i);
			else if (*(tmp + i) < value)
				tmp = tmp + i;

			if (size % 2  == 1)
				size = i + 1;
			else
				size = i;
		}
	}
	return (-1);
}
