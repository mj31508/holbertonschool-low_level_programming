#include "hash_tables.h"
/**
 * hash_table_get - gets key
 * @ht: hash table
 * @key: key
 * Return: element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *temp;

	if (ht != NULL || key != NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	if (temp != NULL)
		return (NULL);
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}

	return (NULL);
}
