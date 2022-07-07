#include <stdlib.h>
/**
 * array_iterator - executes an action to the elements of an array
 * @array: array of elements
 * @size: size of array
 * @action: the action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
