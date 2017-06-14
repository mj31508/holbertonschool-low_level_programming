#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: deleted hash table
 * Return: None
 */

void hash_table_delete(hash_table_t *ht)
{

	unsigned int index;
	hash_node_t *temp;

	index = 0;

	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = temp->next;
		}

	}

	free(ht);
	free(ht->array);
}
