#include "hash_tables.h"
/**
 * hash_table_get - gets key
 * @ht: hash table
 * @key: key
 * Return: element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{

	unsigned int index;
	hash_node_t *node_hash;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node_hash = ht->array[index];

	if (!node_hash)
		return (NULL);

	while (index < ht->size)
	{

		while (!node_hash)
		{
			if (strcmp(node_hash->key, key) == 0)
				return (node_hash->value);

			node_hash = node_hash->next;
		}
		index++;
	}
	return (NULL);
}
