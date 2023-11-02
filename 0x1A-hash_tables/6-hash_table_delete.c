#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: pointer to the hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *buffer, *temp_free;
	unsigned long int x = 0;

	if (!ht)
		return;

	for (x = 0; x < ht->size; x++)
	{
		buffer = ht->array[x];
		while (buffer)
		{
			temp_free = buffer;
			buffer = buffer->next;
			if (temp_free->key)
				free(temp_free->key);
			if (temp_free->value)
				free(temp_free->value);
			free(temp_free);
		}
	}
	free(ht->array);
	free(ht);
}
