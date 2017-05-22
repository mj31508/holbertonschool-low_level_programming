#include "lists.h"

/**
 * free_dlistint - function that holds a pointer to a list
 * @head: pointer to a list
 *
 * Return: Void
 **/
void free_dlistint(dlistint_t *head)
{

	dlistint_t *tmp_head;


	tmp_head = head;

	while (tmp_head != NULL)
	{
		head = head->next;
		free(tmp_head);
		tmp_head =  head;

	}

}
