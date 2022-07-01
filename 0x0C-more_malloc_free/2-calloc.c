#include <stdlib.h>

/**
 * _calloc - allocate memory using a size past as argument
 * @nmemb: nbr of elements
 * @size: size pf each element
 *
 * Return: the pointer to the new space of memory allocated
 * Or NULL if allocation failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0;

	void *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr)
		for (i = 0; i < (int)(nmemb * size); i++)
			*((char *)ptr + i) = 0;
	return (ptr);
}
