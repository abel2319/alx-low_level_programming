#include "lists.h"


void free_list(list_t *head)
{
	list_t *tmp1, *tmp2;

	if (*head)
	{
		tmp1 = *head;
		tmp2 = tmp1->next;
		while (tmp2)
		{
			free(tmp1);
			tmp1 = tmp2;
			tmp2 = tmp1->next;
		}
		free(tmp1);
		free(head);
	}
}
