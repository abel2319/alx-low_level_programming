#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a double linked list
 * @head: head of list
 * @n: the value of new node
 *
 * Return: the address of new node
 * NULL otherwize
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
		if (head != NULL)
		{
			tmp = head;
			while (tmp->next != NULL)
				tmp = tmp->next;
			tmp->next = new;
			new->prev = tmp;
		}
		else
		{
			new->prev = NULL;
			head = new;
		}
	}
	return (new);
}
