#include "hash_tables.h"


/**
 * hash_table_create - create an hash table
 * @size: the siwe of table
 *
 * Return: the address of the table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	if (size != 0)
	{
		table = malloc(sizeof(hash_table_t));
		if (table != NULL)
		{
			table->size = size;
			table->array = calloc(size, sizeof(hash_node_t *));
			if (table->array == NULL)
			{
				free(table);
				return (NULL);
			}
		}
	}
	return (table);
}
