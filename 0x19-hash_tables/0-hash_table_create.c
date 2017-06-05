#include "hash_tables.h"
/**
 * hash_table_create -function that points to a hash table
 * @size: size of the array
 *
 *
 * Return: Returns a pointer to newly created hash table
 **/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;

	if (size <= 0)
	{
		return (0);
	}

	hash = malloc(sizeof(hash_table_t) * 1);

	if (hash == 0)
	{
		return (NULL);
	}

	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);

	if (hash->array == NULL)
	{
		free(hash);
		return (NULL);
	}

	return (hash);
}
