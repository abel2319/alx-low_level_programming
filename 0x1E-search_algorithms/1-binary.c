#include "search_algos.h"


/**
 * print_array - print all elts in array
 * @array: the arrray
 * @first: first index
 * @last: last index
 *
 */
void print_array(int *array, size_t first, size_t last)
{
	size_t j = 0;

	printf("searching in array: ");
	for (j = first; j < last; j++)
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
	size_t first = 0;
	size_t last = size - 1;
	size_t middle = (first + last) / 2;

	if ((array != NULL) || (size > 0) || (array[0] > value))
	{
		while (first <= last)
		{
			print_array(array, first, last);
			if (array[middle] < value)
				first = middle + 1;
			else if (array[middle] == value)
				return (middle);
			last = middle - 1;
			middle = (first + last) / 2;
		}
	}
	return (-1);
}
