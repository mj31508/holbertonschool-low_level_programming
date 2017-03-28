#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - function protype that holds a head pointer and int
 * @head: double head pointer
 * @n: int variable
 *
 *
 *
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp_node;

	temp_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = NULL;
	while (temp_node && temp_node->next)
	{
		temp_node = temp_node->next;
	}
	if (temp_node != NULL)
		temp_node->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
