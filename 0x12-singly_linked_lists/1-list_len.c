#include "lists.h"


/**
 * list_len - count the number of nodes in a list
 * @n: first elt of the list
 *
 * Return: the size of the list or 0
 */
size_t list_len(const list_t *h)
{
	size_t nbr = 0;

	if (n)
	{
		while (n)
		{
			++nbr;
			n = n->next;
		}
	}
	return (nbr);
}
