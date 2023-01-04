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
	for (j = 0; j < size; j++)
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
	size_t i = --size;

	if ((array != NULL) || (size > 0) || (array[0] > value))
	{
		while (size >= 1)
		{
			print_array(tmp, size);
			size = size / 2;

			if (*(tmp + size) == value)
				return (size);
			else if (*(tmp + size) < value)
			{
				if (i % 2  == 1)
					tmp = tmp + size + 1;
				else
					tmp = tmp + size;
			}
			i = size;
		}
	}
	return (-1);
}
