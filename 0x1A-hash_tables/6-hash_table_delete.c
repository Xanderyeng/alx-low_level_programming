#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * hash_table_delete - free a hash table.
 * @ht: given hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr_ht = NULL, *ptr_ht_next = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	if (ht->array != NULL)
	{
		while (i < ht->size)
		{
			if (ht->array[i])
			{
				ptr_ht = ht->array[i];
				while (ptr_ht)
				{
					ptr_ht_next = ptr_ht->next;
					if (ptr_ht->key)
						free(ptr_ht->key);
					if (ptr_ht->value)
						free(ptr_ht->value);
					free(ptr_ht);
					ptr_ht = ptr_ht_next;
				}
			}
			i++;
		}
		free(ht->array);
	}
	free(ht);
}
