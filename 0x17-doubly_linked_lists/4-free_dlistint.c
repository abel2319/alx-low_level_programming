#include "lists.h"

/**
 * free_dlistint - free a double linked list
 * @head: head of the lsit
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
	{
		tmp = head->next;
		free(head);
		while (tmp != NULL)
		{
			head = tmp;
			tmp = tmp->next;
			free(head);
		}
	}
}
