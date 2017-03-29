#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - function that holds a head pointer to a struct
 * @head: head pointer to a struct
 *
 *
 * Return: sum
 **/

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *head_ptr;

	sum = 0;
	head_ptr = head;

	while (head_ptr != NULL)
	{
		sum = sum + head_ptr->n;
		head_ptr = head_ptr->next;
	}
	return (sum);
}
