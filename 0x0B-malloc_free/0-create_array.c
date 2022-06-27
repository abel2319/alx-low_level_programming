#include <stdlib.h>

/**
 *create_array - this fonction creates an array of char
 *@size: the size of array
 *@c: character used to iinitializes the array
 *
 * Return: a pointer to the array, or NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr = NULL;

	if (size > 0)
	{
		ptr = malloc(sizeof(char) * size);
		if (ptr)
		{
			for (i = 0; i < size; i++)
				ptr[i] = c;
			return (ptr);
		}
	}
	return (ptr);
}
