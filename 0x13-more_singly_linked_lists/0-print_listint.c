#include "lists.h"

/**
 * print_listint - print elts in list of int
 * @h: the head of list
 *
 * Return: the number of elts in the list(Success)
 * or zero
 */
size_t print_listint(const listint_t *h)
{
	size_t rtn = 0;

	while (*h)
	{
		printf("%d\n", h->n);
		h = h->next;
		++rtn;
	}
	return (rtn);
}
