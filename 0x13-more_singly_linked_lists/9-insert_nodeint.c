#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at the index given
 * @head: address of header of list
 * @idx: index of node
 * @n: data for new node
 *
 * Return: address of node
 * Or NULL if it doesn't exist
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL, tmp1;
	unsigned int i = 0;

	if (head)
	{
		new = malloc(sizeof(new));
		if (new)
		{
			new->n = n;
			tmp1 = head;
			if (idx == 0)
			{
				free(new);
				return (add_nodeint(head, n));
			}
			else
			{
				i = 1;
				while (tmp1)
				{
					if (i == idx)
					{
						new->next = tmp1->next;
						tmp1->next = new;
						break;
					}
					tmp1 = tmp1->next;
					i++;
				}
				if (tmp1 == NULL)
				{
					free(new);
					return (NULL);
				}
			}
		}
	}
	return (new);
}
