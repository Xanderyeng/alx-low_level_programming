#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * hash_table_print - print a hash table.
 * @ht: given hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr_ht = NULL;
	unsigned long int i = 0, j = 0, last_posix = 0;

	if (ht == NULL)
		return;
	printf("{");
	if (ht != NULL)
	{
		while (i < ht->size)
		{
			if ((ht->array)[i] != NULL)
				last_posix = i;
			i++;
		}
		while (j <= last_posix)
		{
			ptr_ht = ht->array[j];
			while (ptr_ht)
			{
				printf("'%s': '%s'", ptr_ht->key, ptr_ht->value);
				ptr_ht = ptr_ht->next;
				if (j < last_posix - 1)
					printf(", ");
			}
			j++;
		}
	}
	printf("}\n");
}
