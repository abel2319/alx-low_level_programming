#include "hash_tables.h"
/**
 * _strcmp - verify if two strings are same
 * @str1: first strings
 * @str2: second string
 *
 * Return: 1 if str1 and str2 are same
 * 0 otherwize
 */

int _strcmp(const char *str1, char *str2)
{
	int i;

	if (_strlen(str1) == _strlen(str2))
	{
		for (i = 0; str1[i] != '\0'; i++)
			if (str2[i] == '\0' || (str1[i] != str2[i]))
				return (0);
		return (1);
	}
	return (0);
	/* return (1); */
}

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
	hash_node_t *node = NULL;

	if (key == NULL || _strcmp(key, "") == 1)
		return (NULL);
	if (ht != NULL && ht->array != NULL)
	{
		index = key_index((unsigned char *)key, ht->size);
		if (index < ht->size)
			if (ht->array[index] != NULL && ht->array[index] != 0)
			{
				node = ht->array[index];
				while (node != NULL)
				{
					if (_strcmp(key, node->key) == 1)
						return (ht->array[index]->value);
					node = node->next;
				}
			}
	}
	return (NULL);
}
