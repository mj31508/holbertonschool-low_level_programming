#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint-(function that holds a double pointer)
 *@head: double pointer to a struc and a pointer
 *
 * Return: value
 **/

int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	value = 0;
	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	value = temp->n;
	*head = temp->next;
	free(temp);
	return (value);
}
