#include "lists.h"

/**
 * add_node_end - add a new node at the end of list whose the head is *head
 * @head: the head of old list
 * @str: string for the new node
 *
 * Return: the qddress of new node
 * Or NULL if somethings failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;
	list_t *tmp;
	int len = 0;

	new = malloc(sizeof(list_t));
	if (new)
	{
		new->str = strdup(str);
		if (*str)
		{
			while (*str)
			{
				len++;
				str++;
			}
		}
		new->len = len;
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
