#include "hash_tables.h"
/**
 * hash_table_get - a function to retrieve value associeted with key
 * @ht: pointer to table
 * @key: key to retrive it value
 *
 * Return: value or NULL if key does not exit.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t  *buffer;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	buffer = ht->array[index];

	while (buffer)
	{
		if (!strcmp(key, buffer->key))
			return (buffer->value);
		buffer = buffer->next;
	}
	return (NULL);
}
