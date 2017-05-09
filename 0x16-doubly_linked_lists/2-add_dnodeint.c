#include "lists.h"

/**
 * add_dnodeint - function that holds a double ptr to a struct and a int
 * @head: double head pointer that points to a struct
 * @n: const int
 * Return: address of the new element of NULL if failed
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
        dlistint_t *new_node;
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return(NULL);
	}

		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *head;
		*head = new_node;
		return (new_node);

}
