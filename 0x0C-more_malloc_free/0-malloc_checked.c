#include < stdlib.h>

/**
 * malloc_checked - allocate memory using a size past as argument
 * @b: size of memory
 *
 * Return: the pointer to the new space of memory allocated
 * Or 98 if allocation failed
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = 98;

	if (b != 0)
	{
		ptr = malloc(b);
		if (!ptr)
			return (98);
	}
	return (ptr);
}
