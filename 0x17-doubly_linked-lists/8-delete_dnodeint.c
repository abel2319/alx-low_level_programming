#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at the index idx in dble linkedlist
 * @head: head of list
 * @idx: index of the new node
 *
 * Return: 1 if it succeeded
 * -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 1;
	dlistint_t *tmp1;
	dlistint_t *tmp2;

	if (h == NULL || idx < 0)
		return (-1);

	tmp = head;
	if (idx == 0)
	{
		head = tmp->next;
		head->prev = NULL;
		free(tmp);
		return (1);
	}
	else
	{
		while (tmp != NULL)
		{
			if (i == idx)
			{
				tmp->prev->next = tmp->next;
				tmp->next->prev = tmp->prev;
				free(tmp);
				return (1)
			}
			tmp = tmp->next;
			i++;
		}
	}
	return (-1);
}
