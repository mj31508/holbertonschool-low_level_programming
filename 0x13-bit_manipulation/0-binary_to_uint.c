#include "holberton.h"
#include <stdio.h>

/**
 * binary_to_uint - function that holds a constant character
 * @b: constan character pointer
 *
 *
 *
 * Return: The converted number or 0 if NULL
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;

	if (b == '\0')
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		else if (b[i] == '0' && b[i] == '1')
		{
			return ((b[i] % 2) + 10 * (b[i] / 2));

		}
		i++;
	}
	return (i);
}
