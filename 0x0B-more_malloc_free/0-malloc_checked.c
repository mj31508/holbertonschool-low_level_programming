#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - function prototype that holds a unsigned int of b
 * @b: variable that will be malloc
 * Return: Always pointer.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == '\0')
	{
		exit(98);
	}
	return (ptr);
}
