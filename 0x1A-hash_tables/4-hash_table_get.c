#include "hash_tables.h"

/**
 * hash_table_get -  retrieves a value associated with a key.
 * @ht: hash table
 * @key: the key
 *
 * Return: the value, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;

	if (ht != NULL && ht->array != NULL && key != NULL)
	{
		index = hash_djb2((unsigned char *)key, ht->size);
		if (index < ht->size)
			return (ht->array[index]->value);
	}
	return (NULL);
}
