#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - prototype function that holds a int and char
 * @size: the address of memory to print
 * @c: the size of the memory to print
 *
 * Return: a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size  == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	else

		while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
