#include "lists.h"

/**
 * dlistint_len - function that holds a head pointer
 * @h: head pointer
 *
 *
 * Return: Number of elements
 **/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *new_ptr;
	unsigned int i = 0;

	new_ptr = h;

	while (new_ptr != NULL)
	{
		new_ptr = new_ptr->next;
		i++;
	}
	return (i);
}
