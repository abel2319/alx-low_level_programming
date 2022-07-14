#include "lists.h"

/**
 * print_list - print elts in a singly linked list
 * @n: first elt of the list
 *
 * Return: the number of elts in the list
 */
size_t print_list(const list_t *n)
{
	size_t nbr = 0;

	if (n == NULL)
		return (0);
	while (n)
	{
		if (n->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", n->len, n->str);
		}
		n = n->next;
		++nbr;
	}
	return (nbr);
}
