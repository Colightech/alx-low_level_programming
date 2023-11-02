#include "hash_tables.h"

/**
 * hash_table_print - a function to print the key:value from ht
 * @ht: pointer to hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x = 0;
	hash_node_t  *buffer;
	int not_find = 0;

	if (!ht)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		buffer = ht->array[x];
		while (buffer)
		{
			if (not_find)
				printf(", ");
			printf("'%s': '%s'", buffer->key, buffer->value);
			not_find = 1;
			buffer = buffer->next;
		}
	}
	printf("}\n");
}
