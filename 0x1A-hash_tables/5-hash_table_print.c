#include "hash_tables.h"
/**
 * hash_table_print - prints all elts in a hash table
 * @ht: the hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, coma = 0;
	hash_node_t *node = NULL;

	if (ht != NULL)
	{
		printf("{");
		if (ht->array != NULL)
		{
			for (i = 0; i < ht->size; i++)
			{
				node = ht->array[i];
				if (coma == 1 && node != NULL)
					printf(", ");
				while (node != NULL)
				{
				coma = 1;
				printf("'%s': '%s'", node->key, node->value);
				if (node->next != NULL)
					printf(", ");
				node = node->next;
				}
			}
		}
		printf("}\n");
	}
}
