#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: pointer to table
 * @key: key of the element
 * @value: value of the element
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *value_dup, *key_dup;
	hash_node_t  *buffer, *new_node;

	if (!ht || !key || !*key || !value)
		return (0);

	value_dup = strdup(value);
	if (!value_dup)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	buffer = ht->array[index];

	while (buffer)
	{
		if (!strcmp(key, buffer->key))
		{
			free(buffer->value);
			buffer->value = value_dup;
			return (1);
		}
		buffer = buffer->next;
	}
	new_node = calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_dup);
		return (0);
	}
	key_dup = strdup(key);
	if (!key_dup)
		return (0);
	new_node->key = key_dup;
	new_node->value = value_dup;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
