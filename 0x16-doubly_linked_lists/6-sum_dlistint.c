#include "lists.h"

/**
 * sum_dlistint - holds a head pointer
 * @head: pointer to struct
 *
 * Return: total of all of the data
 **/

int sum_dlistint(dlistint_t *head)
{
	unsigned int total;
	dlistint_t *temp;

	total = 0;
	temp = head;

	if (head == NULL)
	{
		return (0);
	}

	while (!temp)
	{
		total += temp->n;
		temp = temp->next;
	}

	return (total);

}
