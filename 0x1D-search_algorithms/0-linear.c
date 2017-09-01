#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in array of ints
 * @array: pointer to a int thats the first element of a array
 * @size: size of an array
 * @value: value to search for in array
 * Return: 1 or -1
 **/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	i = 0;

	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
		else if (array[i] != value)
			i++;
	}
	return (-1);
}
