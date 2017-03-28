#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * print_listint - function that holds a listint_t pointer
 * @h: head pointer for struct
 *
 *
 *
 **/


size_t print_listint(const listint_t *h)
{
	unsigned long int counter;

	counter = 0;
	while (h != '\0')
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
