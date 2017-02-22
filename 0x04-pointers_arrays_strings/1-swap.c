#include "holberton.h"
#include <stdio.h>

/**
 *swap_int - function prototype that holds two parameters.
 *@a: first argument
 *@b: second argument
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
