#include "lists.h"

/**
 * sum_listint - calcul the sum of elt in list head
 * @head: address of header of list
 *
 * Return: sum of elts of the list
 * Or 0 if list doesn't exist
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp1 = NULL;
	unsigned int i = 0;

	if (head)
	{
		tmp1 = head;
		while (tmp1)
		{
			i += tmp1->n;
			tmp1 = tmp1->next;
		}
	}
	return (i);
}
