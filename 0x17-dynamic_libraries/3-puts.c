#include "holberton.h"

/**
 * _puts - function prototype that holds the str pointer.
 *@str: pointer to find the string.
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar ('\n');

}
