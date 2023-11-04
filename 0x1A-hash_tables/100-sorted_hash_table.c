#include "hash_tables.h"

/**
 * sorted_list - function for insert new node in sorted
 * @ht: pointer to sorted hash table
 * @new_node: pew node to insert
 *
 */
void sorted_list(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *sbuffer = ht->shead;

	if (sbuffer == NULL)
	{
		ht->shead = ht->stail = new_node;
		new_node->snext = new_node->sprev = NULL;
		return;
	}
	do {
		if (strcmp(new_node->key, sbuffer->key) < 0)
		{
			new_node->snext = sbuffer;
			new_node->sprev = sbuffer->sprev;

			if (!sbuffer->sprev)
				ht->shead = new_node;
			else
				sbuffer->sprev->snext = new_node;
			sbuffer->sprev = new_node;
			return;
		}
		sbuffer = sbuffer->snext;
	} while (sbuffer);
	new_node->sprev = ht->stail;
	new_node->snext = ht->stail->snext;
	ht->stail->snext = new_node;
	ht->stail = new_node;
}

/**
 * shash_table_create - creates a sorted hash tables
 * @size: size of the hash table
 *
 * Return: pointer to hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *h_table;

	if (size == 0)
		return (NULL);

	h_table = calloc(1, sizeof(shash_table_t));
	if (h_table == NULL)
		return (NULL);

	h_table->size = size;
	h_table->array = calloc(size, sizeof(shash_node_t *));
	if (h_table->array == NULL)
	{
		free(h_table);
		return (NULL);
	}
	return (h_table);
}

/**
 * shash_table_set - function that adds an element to the sorted hash table
 * @ht: pointer to sorted hash table
 * @key: key to add the element
 * @value: value to add the element
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *valuecopy, *keycopy;
	shash_node_t  *buffer, *new_node;

	if (!ht || !key || !*key || !value)
		return (0);

	valuecopy = strdup(value);
	if (!valuecopy)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	buffer = ht->array[index];

	while (buffer)
	{
		if (!strcmp(key, buffer->key))
		{
			free(buffer->value);
			buffer->value = valuecopy;
			return (1);
		}
		buffer = buffer->next;
	}
	new_node = calloc(1, sizeof(shash_node_t));
	if (new_node == NULL)
	{
		free(valuecopy);
		return (0);
	}
	keycopy = strdup(key);
	if (!keycopy)
		return (0);

	new_node->key = keycopy;
	new_node->value = valuecopy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	sorted_list(ht, new_node);
	return (1);
}
/**
 * shash_table_get - function to retrieve value associeted with key
 * @ht: pointer to hash table
 * @key: key to retrive value
 *
 * Return: value or NULL if key does not exit.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t  *buffer;

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

/**
 * shash_table_print - function to print the key:value from ht
 * @ht: pointer to hash table
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *buffer;
	int not_find = 0;

	if (!ht)
		return;
	buffer = ht->shead;
	printf("{");
	while (buffer)
	{
		if (not_find)
			printf(", ");
		printf("'%s': '%s'", buffer->key, buffer->value);
		not_find = 1;
		buffer = buffer->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - function to print the key:value from ht in reverse
 * @ht: pointer to hash table
 *
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *buffer;
	int not_find = 0;

	if (!ht)
		return;
	buffer = ht->stail;
	printf("{");
	while (buffer)
	{
		if (not_find)
			printf(", ");
		printf("'%s': '%s'", buffer->key, buffer->value);
		not_find = 1;
		buffer = buffer->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - free hash table and all nodes
 * @ht: pointer to hash table
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *buffer, *temp;
	unsigned long int x = 0;

	if (!ht)
		return;

	for (x = 0; x < ht->size; x++)
	{
		buffer = ht->array[x];
		while (buffer)
		{
			temp = buffer;
			buffer = buffer->next;
			if (temp->key)
				free(temp->key);
			if (temp->value)
				free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
