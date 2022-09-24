#include "hash_tables.h"
/**
 * hash_table_print - prints all elts in a hash table
 * @ht: the hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	int i = 0;
	hash_node_t *list = NULL;
	hash_node_t *node = NULL;

	if (ht != NULL)
	{
		printf("{");
		if (ht->array != NULL)
		{
			for(i = 0; i < ht->size; i++)
			{
				list = ht->array[i];
				if (list != NULL)
				{
					node = list;
					while (node != NULL)
					{
						printf("'%s': '%s'");
						if(i != ht->size && node->next != NULL)
							printf(", ");
						node = node->next;
					}
				}
			}
		}
		printf("}\n");
	}
}
