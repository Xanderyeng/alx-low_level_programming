#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create new hash table
 * @size: size of the array in the hash table
 * Return: pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = NULL;

	new_ht = calloc(sizeof(hash_table_t), 1);
	if (new_ht == NULL)
	{
		free(new_ht);
		return (NULL);
	}
	new_ht->size = size;
	new_ht->array = calloc(sizeof(hash_table_t *), size);
	if (new_ht->array == NULL)
	{
		free(new_ht);
		return (NULL);
	}
	return (new_ht);
}
