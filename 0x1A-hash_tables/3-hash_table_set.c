#include "hash_tables.h"

/**
 * _strlen - finds lenght of a given string.
 * @s: The string.
 *
 * Return: the len of s, 0 otherwise.
 */
int _strlen(const char *s)
{
	int len = 0;

	if (s != NULL)
	{
		while (*s++)
			len++;
	}
	return (len);
}

/**
 * _strcp - Creates a copy of a given string.
 * @s: The string to copy.
 *
 * Return: A pointer of new string, otherwise NULL.
 */
char *_strcp(const char *s)
{
	int i, len;
	char *tmp = NULL;

	if (s != NULL)
	{
		len = _strlen(s);
		tmp = malloc(sizeof(char) * (len + 1));
		if (tmp != NULL)
		{
			for (i = 0; i < len; i++)
				tmp[i] = s[i];
			tmp[i] = '\0';
		}
	}
	return (tmp);
}
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
		new->key = _strcp(key);
		new->value = _strcp(value);

		index = hash_djb2((unsigned char *)key) % ht->size;
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
				new->next = ht->array[index];
				ht->array[index] = new;
				return (1);
			}
		}
	}
	return (0);
}
