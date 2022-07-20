#include "lists.h"

/**
 * add_nodeint2 - add a new node to the head of list *head
 * @head: the head of old list
 * @new: the new node
 *
 * Return: the address of new node
 * Or NULL if so;ethings failed
 */
listint_t *add_nodeint2(listint_t **head, listint_t *new)
{
	if (new)
	{
		if (*head)
			new->next = (*head);
		else
			new->next = NULL;
		*head = new;
	}
	return (new);
}
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
	listint_t *new = NULL, *tmp1;
	unsigned int i = 0;

	if (*head)
	{
		new = malloc(sizeof(new));
		if (new)
		{
			new->n = n;
			tmp1 = *head;
			if (idx == 0)
			{
				return (add_nodeint2(head, new));
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
