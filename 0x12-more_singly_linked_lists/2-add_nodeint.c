#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - funtion prototype that holds a double pointer
 * @head: double pointer
 * @n: constant int
 *
 * Return: listint_t
 **/



listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
