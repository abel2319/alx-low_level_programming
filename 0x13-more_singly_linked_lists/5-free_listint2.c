#include "lists.h"

/**
 * free_list - free list in head
 * @head: address of header of list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp1, *tmp2;

	if (*head)
	{
		if ((*head)->next == NULL)
			free(*head);
		else
		{
			tmp1 = *head;
			tmp2 = tmp1->next;
			while (tmp2)
			{
				free(tmp1);
				tmp1 = tmp2;
				tmp2 = tmp1->next;
				if (tmp2 == NULL)
					free(tmp1);
			}
		}
		*head = NULL;
	}
}
