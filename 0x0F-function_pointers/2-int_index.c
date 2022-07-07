/**
 * int_index - compare the elts of array with a value in cmp
 * @array: array of values
 * @size: size of array
 * @cmp: functionn to compare
 *
 * Return: the indix of value in array which return 1 in cmp
 * Or -1 if nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
				return (i);
		}
	}
	return (-1);
}
