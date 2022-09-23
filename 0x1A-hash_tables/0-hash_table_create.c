#include "hash_tables.h"


/**
 * hash_table_create(unsigned long int size): create an hash table
 * @size: the siwe of table
 *
 * Return: the address of the table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	table = malloc(sizeof(hash_table_t) * size);
	return (table);
}
