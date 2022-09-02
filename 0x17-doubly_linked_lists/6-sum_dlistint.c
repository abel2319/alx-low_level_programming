#include "lists.h"

/**
 * sum_dlistint - sums all data in a double linked list
 * @head: head of the lsit
 *
 * Return: the sum of data
 * 0 otherwize
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;
	int i = 0;

	if (head != NULL)
	{
		tmp = head;
		while (tmp != NULL)
		{
			i += tmp->n;
			tmp = tmp->next;
		}
	}
	return (i);
}
