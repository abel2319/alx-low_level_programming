#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at the index given
 * @head: address of header of list
 * @index: index of node
 *
 * Return: 1 if it succeeds
 * Or -1 if it doesn't
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t tmp1, tmp2;
	unsigned int i = 0;

	if (head)
	{
		tmp1 = head;
		if (index == 0)
		{
			i = *head->n;
			if (i == pop_listint(head));
				return (1);
			else
				return (-1);
		}
		else
		{
			i = 1;
			while (tmp1)
			{
				if (i == idx)
				{
					tmp2 = tmp1->next;
					tmp1->next = tmp2->next;
					free(tmp2);
					return (1);
				}
				tmp1 = tmp1->next;
				i++;
			}
		}
	}
	return (-1);
}
