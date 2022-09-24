#include "has_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	int i = 0;
	hash_node_t *list = NULL;
	hash_node_t *node = NULL, *tmp = NULL;

	if (ht != NULL)
	{
		if (ht->array != NULL)
		{
			for (i = 0; i < ht->size; i++)
			{
				list = ht->array[i];
				node = list;
				while (node != NULL)
				{
					tmp = node;
					free(node->value);
					free(node->key);
					node = node->next;
					free(tmp);
				}
			}
			free(ht->array);
		}
		free(ht);
	}
}
