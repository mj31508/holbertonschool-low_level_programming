#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - portotype function that holds two ints
 * @nmemb: number of members
 * @size: total size to be malloc
 *
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}

	i = 0;
	unsigned int total = size * nmemb;

	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
