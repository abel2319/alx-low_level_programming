#include "lists.h"

/**
 * pop_listint2 - delete head of list
 * @head: address of header of list
 *
 * Return: the data of head deleted
 */
int pop_listint2(listint_t **head)
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
	listint_t *tmp1, *tmp2;
	unsigned int i = 0;

	if (*head)
	{
		tmp1 = *head;
		if (index == 0)
		{
			i = (*head)->n;
			if ((int)i == pop_listint2(head))
				return (1);
			else
				return (-1);
		}
		else
		{
			i = 1;
			while (tmp1)
			{
				if (i == index)
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
