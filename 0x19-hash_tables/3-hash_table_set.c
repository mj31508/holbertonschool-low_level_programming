#include "hash_tables.h"
/**
 * hash_table_set - pointer to hash table
 * @ht: pointer
 * @key: pointer to const char
 * @value: pointer to cont char
 * Return: int
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t  *new_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		(return 0);

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		return (0);
	}

	index = key_index((unsigned char *)key, ht->size);


	new_node->key = strdup(key);
	new_node->value =  strdup(value);
	new_node->next =  NULL;

	if (new_node->key == NULL || new_node->value == NULL)
	{
		(return 0);
	}

	ht->array[index] = new_node;
	(return 1);
}
