#include "lists.h"
/**
 * @*add_dnodeint_end- function prototype that holds a double pointer
 * @head: double pointer to a dlistint_t struct
 * @n: a constanct number
 *
 * Return: address of the new element or NULL if failed
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new_node;
	dlistint_t *temp;

	temp = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{

		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;



	if (temp == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
		new_node->prev = temp;

	}
	}
	temp->next = new_node;

	return (new_node);

}
