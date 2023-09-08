#include "hash_tables.h"

/**
 * key_index - Getting the index value of a key.
 * @key: key to get the index from
 * @size: array size.
 * Return:key index
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
