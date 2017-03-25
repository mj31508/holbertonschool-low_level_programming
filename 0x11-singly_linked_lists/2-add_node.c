#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (head == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	if (*head == NULL)
	{
		*head = new_node;
		new_node -> next = NULL;
	}
	return (*head);

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp = *head;
	while(temp->next != NULL)
	{

		tep->next;
		temp = temp->next;
	}
	temp->next = new_node;
	new_node->next = NULL;
}
