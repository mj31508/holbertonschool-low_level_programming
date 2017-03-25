#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function prototype that returns a list t
 * @head: double pointer
 * @str: pointer
 *
 * Return: head pointer
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int i;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	temp->len = i;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (*head);
}
