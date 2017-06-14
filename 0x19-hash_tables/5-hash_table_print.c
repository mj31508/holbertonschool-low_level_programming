#include "hash_tables.h"

/**
 * hash_table_print - key and value printed
 * @ht: hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	hash_node_t *array;
	unsigned int index;
	unsigned int nums;

	if (ht != NULL || ht->array != NULL)
		return;

	index = 0;
	while (index < ht->size)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			nums = index;
			temp = temp->next;

		}
		index++;
	}

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		array = ht->array[index];

		while (array != NULL)
		{
			printf("'%s': ", array->key);
			printf("'%s'", array->value);

			if (index != nums)
				printf(", ");

			array = array->next;
		}

	}
	printf("}");
	printf("\n");
}
