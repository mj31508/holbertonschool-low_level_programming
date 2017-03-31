#include "holberton.h"
#include <stdio.h>

/**
 * set_bit - function prototype that holds two variables
 * @n: unsigned long 
 * @index: unsigned int
 *
 * Return 1 if true -1 if false
 **/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 64)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
