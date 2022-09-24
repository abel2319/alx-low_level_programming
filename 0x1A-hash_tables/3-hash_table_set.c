#include "hash_tables.h"

/**
 * hash_table_set - add an elt to the hash table
 * @ht: the hash table
 * @key: key of new elt
 * @value: value of new elt
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new = NULL;

	if (ht != NULL)
	{
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
		new->key = key;
		new->value = value;

		index = hash_djb2(key) % ht->size;
		if (index < ht->size)
		{
			if (ht->array[index] != NULL)
			{
				new->next = NULL;
				ht->array[index] = new;
				return (1);
			}
			else
			{
				new->next = array[index];
				ht->array[index] = new;
				return (1);
			}
		}
	}
	return (0);
}
