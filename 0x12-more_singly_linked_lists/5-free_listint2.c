#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_listint2 - funtion that holds a double pointer
 * @head: double pointer to a struct
 *
 *
 *
 * Return: none
 **/


void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		*head = temp->next;
		free(head);
	}

}
