#include "hash_tables.h"

/**
 * *hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table
 * @key: the key
 * Return: associated value or or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index =  hash_djb2((unsigned char *)key) % ht->size;
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
