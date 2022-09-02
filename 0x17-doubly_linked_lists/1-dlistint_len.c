#include "lists.h"

/**
 * dlistint_len - count the number of node in a list
 * @h: head of list
 *
 * Return: the number of nodes in th list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t rtn = 0;
	const dlistint_t *tmp;

	if (h != NULL)
	{
		tmp = h;
		while (tmp != NULL)
		{
			rtn++;
			tmp = tmp->next;
		}
	}
	return (rtn);
}
