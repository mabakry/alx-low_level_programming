#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: he hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			temp = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = temp;
		}
	}
	free(ht->array);
	free(ht);
}
