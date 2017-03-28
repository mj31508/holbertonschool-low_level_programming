#include "lists.h"

/**
 * listint_len - function prototype that holds a listint_t pointer
 * @h: pointer to struct
 *
 *
 *
 **/

size_t listint_len(const listint_t *h)
{

	unsigned int counter;

	counter = 0;
	while (h != '\0')
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
