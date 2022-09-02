#include "lists.h"

/**
 * insert_dnodeint_at_index - add a new node at the index idx double linked list
 * @head: head of list
 * @idx: index of the new node
 * @n: the value of new node
 *
 * Return: the address of new node
 * NULL otherwize
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1;
	dlistint_t *new = NULL;
	dlistint_t *tmp;

	if (*h == NULL && idx > 0)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new != NULL)
	{
		new->n = n;
		tmp = (*h)->next;
		while (tmp != NULL)
		{
			if (i == idx)
			{
				new->prev = tmp->prev;
				new->next = tmp;
				tmp->prev->next = new;
				tmp->prev = new;
				return (new);
			}
			tmp = tmp->next;
			i++;
			if (tmp->next == NULL && i == idx)
			{
				free(new);
				return (add_dnodeint_end(&tmp, n));
			}
		}
	}
	return (new);
}
