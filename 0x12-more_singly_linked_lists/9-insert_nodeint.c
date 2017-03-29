#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - function protype that holds double head pointer and two int
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

	if (head == NULL || *head == NULL)
		return (NULL);

	mv_node = *head;

	count = 0;
	while (count != idx - 1)
	{
		if (mv_node->next == NULL)
			break;
		mv_node = mv_node->next;
		count++;
	}
	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	if (idx - 1 > count)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = mv_node->next;
	mv_node->next = new_node;
	return (new_node);
}
