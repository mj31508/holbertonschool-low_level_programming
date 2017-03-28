#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - function prototype that holds two variables
 * @head: head pointer
 * @index: index of node to print
 *
 * Return: node
 **/


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	temp = head;
	if (temp == NULL)
		return (NULL);

	i = 0;
	while (i != index)
	{
		if (temp->next == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
		i++;
	}
	return (temp);
}
