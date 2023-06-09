#include "hash_tables.h"

/**
 * key_index - Get the index at which a key pair stored
 * in array of a hash table.
 * @key: The key to get the ndex of
 * @size: The size of the array of the hash table
 *
 * Return: The index of the key
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
