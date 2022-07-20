#include "lists.h"

/**
 * add_nodeint - add a new node to the head of list *head
 * @head: the head of old list
 * @n: int for the new node
 *
 * Return: the address of new node
 * Or NULL if so;ethings failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new)
	{
		new->n = n;
		if (*head)
			new->next = (*head);
		else
			new->next = NULL;
		*head = new;
	}
	return (new);
}
