#include "lists.h"

/**
 * print_dlistint - function that hold a pointer to struct
 * @h: head pointer
 *
 * Return: Return the number of nodes
 **/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *move;
	unsigned int i = 0;

	move = h;

	while (move != NULL)
	{
		printf("%d\n", move->n);
		move = move->next;
		i++;
	}
	return (i);
}
