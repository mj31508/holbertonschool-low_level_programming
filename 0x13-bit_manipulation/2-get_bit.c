#include "holberton.h"
#include <stdio.h>

/**
 * get_bit - function prototype that holds two variables
 * @n: long int
 * @index: starting position of 0
 * Return: -1 if greater than 64, n if value at index is true
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	n = n >> index;
	if (index >= 63)
		return (-1);
	n = n % 2;
	return (n);
}
