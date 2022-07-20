#include "lists.h"

/**
 * listint_len - count the nbr of elts in list of int
 * @h: the head of list
 *
 * Return: the number of elts in the list(Success)
 * or zero
 */
size_t listint_len(const listint_t *h)
{
	size_t rtn = 0;

	while (*h)
	{
		++rtn;
		h = h->next;
	}
	return (rtn);
}
