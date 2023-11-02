#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key.
 * @key: the key of the key value pair
 * @size: size of the array
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hash;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
