#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <string.h>

/**
 * list_len - function of type size t
 * @h: pointer that points at the head of a struct
 *
 *
 * Return: num of elements
 **/

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
