#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node = NULL, *tmp = NULL;

	if (ht != NULL)
	{
		if (ht->array != NULL)
		{
			for (i = 0; i < ht->size; i++)
			{
				node = ht->array[i];
				while (node != NULL)
				{
					tmp = node;
					free(tmp->value);
					free(tmp->key);
					node = node->next;
					free(tmp);
				}
			}
			free(ht->array);
		}
		free(ht);
	}
}
