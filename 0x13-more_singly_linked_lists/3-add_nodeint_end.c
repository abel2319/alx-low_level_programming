#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of list whose the head is *head
 * @head: the head of old list
 * @n: int for the new node
 *
 * Return: the qddress of new node
 * Or NULL if somethings failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *tmp;

	new = malloc(sizeof(listint_t));
	if (new)
	{
		new->n = n;
		if (*head)
		{
			tmp = *head;
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = new;
			new->next = NULL;
		}
		else
		{
			new->next = NULL;
			*head = new;
		}
	}
	return (new);
}
