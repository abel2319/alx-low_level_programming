#include "lists.h"

/**
 * pop_listint - delete head of list
 * @head: address of header of list
 *
 * Return: the data of head deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp1;
	int i = 0;

	if (head)
	{
		i = (*head)->n;
		tmp1 = *head;
		*head = tmp1->next;
		free(tmp1);
	}
	return (i);
}
