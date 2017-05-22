#include "lists.h"

/**
 * *get_dnodeint_at_index - function that holds a pointer and index num
 * @head: head pointer
 * @index: unsigned int
 * Return: Null if node doesn't exist
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int index2;

	index2 = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = head;

	while (temp != NULL)
	{
		if (index == index2)
		{
			return (temp);
		}
		index2++;
		temp =  temp->next;
	}
	return (NULL);
}
