#include "lists.h"

/**
 * add_dnodeint - add a new node at the head of a double linked list
 * @head: head of list
 * @n: the value of new node
 *
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new != NULL)
	{
		new->n = n;
		new->prev = NULL;
		if (*head != NULL)
		{
			new->next = *head;
			(*head)->prev = new;
			*head = new;
		}
		else
		{
			new->next = NULL;
			*head = new;
		}
	}
	return (new);
}
