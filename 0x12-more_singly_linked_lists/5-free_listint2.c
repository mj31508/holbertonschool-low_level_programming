#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_listint2 - function that holds a double pointer
 * @head: double pointer to a struct
 *
 *
 *
 * Return: none
 **/


void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}

}
