#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i, count = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (count > 0)
				printf(", ");

			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			count++;
		}
	}
	printf("}\n");
}
