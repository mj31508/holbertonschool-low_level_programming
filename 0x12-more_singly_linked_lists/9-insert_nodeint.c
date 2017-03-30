#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - function protype that holds double ptr
 * @head: Double pointer that points to struct and head
 * @n: variable that will be used in new node
 * @idx: index that is inserted into new node
 * Return: listint_t
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *mv_node;
	unsigned int count;

	if (head == NULL)
		return (NULL);

	mv_node = *head;

	count = 1;
	while (count < idx)
	{
		mv_node = mv_node->next;

		if (mv_node->next == NULL)
			return (NULL);
		count++;
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free (new_node);
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		*head = new_node;
		new_node->next = mv_node;
	}
	else if (new_node->next)
	{
		new_node->next = mv_node->next;
		mv_node->next = new_node;
	}
	else
	     {
		     new_node->next = NULL;
		     mv_node->next = new_node;
	     }
	return (new_node);
}
