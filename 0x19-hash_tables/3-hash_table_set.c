#include "hash_tables.h"
/**
 * hash_table_set - pointer to hash table
 * @ht: hash table
 * @key: pointer to const char
 * @value: pointer to cont char
 * Return: int
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t  *new_node, *tmp;
	unsigned long int index;

	if (strlen(value) == 0)
		return (NULL);
	if (ht == NULL || key == NULL || value == NULL)
		return (0);
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
		return (0);
	}
	ht->array[index] = new_node;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	tmp = ht->array[index];
	while (tmp != NULL)
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			free(node->key);
			free(node->value);
			free(node);
			return (1);
		}
	tmp = tmp->next;
}
ht->array = new_node;
node->next = tmp;
}
return (1);
}
