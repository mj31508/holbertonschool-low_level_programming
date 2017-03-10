#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - function prototype
 * @min: min variable to be stored in num variable
 * @max: max variable to stored with min inside the num
 * Return: Nothing.
 */


int *array_range(int min, int max)
{
	int *ptr;
	int num;
	int i;

	if (min > max)
	{
		return (NULL);
	}

num = max - min + 1;

ptr = malloc(sizeof(int) * num);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < num; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
