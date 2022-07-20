#include "lists.h"

/**
 * get_nodeint_at_index - get not at the index given
 * @head: address of header of list
 * @index: index of node
 *
 * Return: address of node
 * Or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp1 = NULL;
	unsigned int i = 0;

	if (head)
	{
		tmp1 = head;
		while (tmp1)
		{
			if (i == index)
				return (tmp1);
			tmp1 = tmp1->next;
			i++;
		}
	}
	return (tmp1);
}
