#include "hash_tables.h"
/**
 * key_index - holds key and size
 * @key: key
 * @size: size
 *
 * Return: index
 **/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int bucket;
	unsigned long int index;

	bucket = hash_djb2(key);
	index = bucket % size;

	return (index);
}
