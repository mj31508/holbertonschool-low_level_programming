#include "function_pointers.h"


/**
 * int_index - function that holds a function pointer
 * @array: array that holds the numerical elements
 * @size: comparison integer gor our array
 * @cmp: double pointer
 *
 *
 * Return: return -1 if elements match or return size 0
 ***/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || !(array) || !(cmp))
		return (-1);
	while (!(cmp(array[i])))
	{
		i++;
		if (i == size)
			return (-1);
	}
	return (i);

}
