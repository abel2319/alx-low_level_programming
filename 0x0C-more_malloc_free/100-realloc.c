#include <stdlib.h>

/**
 * _realloc - reallocates a memory using malloc
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: size, in bytes, of the allocated space for @ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer to new allocated memory
 * NULL, if @ptr is NULL || @new_size == 0 && ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i = 0;
	void *ptr1 = NULL;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr1 = malloc(new_size);

		if (ptr1 == NULL)
			return (NULL);

		return (ptr1);
	}

	ptr1 = malloc(new_size);
	if (ptr1)
	{
		for (i = 0; i < (int)old_size; i++)
			*((char *)ptr1 + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (ptr1);
}
