#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table
 * @key: They key
 * @value: Value to add
 * Return: 1 if success, 0 if not.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *ht_node = NULL;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);
	index = key_index((unsigned char *) key, ht->size);
	ht_node = (ht->array)[index];
	while (ht_node != NULL)
	{
		if (strcmp(ht_node->key, key) == 0)
		{
			free((ht->array)[index]->value);
			ht_node->value = strdup(value);
			return (1);
		}
		ht_node = ht_node->next;
	}
	ht_node = malloc(sizeof(hash_node_t));
	if (ht_node == NULL)
		return (0);
	ht_node->key = strdup(key);
	ht_node->value = strdup(value);
	ht_node->next = (ht->array)[index];
	(ht->array)[index] = ht_node;
	return (1);
}
