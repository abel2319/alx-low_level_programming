#include "lists.h"

/**
 * get_dnodeint_at_index - research a node at the index specify
 * @head: head of the lsit
 * @index: the index of the node
 *
 * Return: the address of the node
 * NULL otherwize
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int i = 0;

	if (head != NULL)
	{
		tmp = head;
		while (tmp != NULL)
		{
			if (i == index)
				return (tmp);
			tmp = tmp->next;
			i++;
		}
	}
	return (tmp);
}
