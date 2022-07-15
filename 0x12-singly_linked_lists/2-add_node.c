#include "lists.h"

/**
 * add_node - add a new node to the list whose the head is *head
 * @head: the head of old list
 * @str: string for the new node
 *
 * Return: the qddress of new node
 * Or NULL if so;ethings failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	int len = 0;

	new = malloc(list_t);
	if (new)
	{
		new->str = strdup(str);
		if (str)
		{
			while (str)
			{
				len++;
				str++;
			}
			len++;
		}
		new->len = len;
		if (*head)
			new->next = (*head);
	}
	return (new);
}
