#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_list -  function prototype of size_t that holds a head pointer
 * @h: head pointer in the holberton struct
 *
 * Return: Number of nodes
 **/

size_t print_list(const list_t *h)
{
	const list_t *temp;
	unsigned int i = 0;
	temp = h;

	while (temp != NULL)
	{
		printf("[%d} %s\n", temp->len, temp->str);
		temp = temp->next;
		i++;
	}
	return(i);
}
