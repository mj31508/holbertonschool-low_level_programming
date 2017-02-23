#include "holberton.h"

/**
 * print_rev - function prototype that holds a pointer variable.
 *@s: pointer variable
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{

		i++;
	}

	i--;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i--;

	}
	_putchar ('\n');
}
