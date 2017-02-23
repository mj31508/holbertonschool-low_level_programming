#include "holberton.h"

/**
 * puts_half - function prototype for str pointer
 *@str: pointer
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int length = _strlen(str);
	int i = length / 2;

	length++;

	while (str[i] != '\0')
	{
		_putchar (str[i]);
		i++;
	}
	_putchar ('\n');
}

/**
 * _strlen - function prototype for the length of pointer s.
 *@s: point variable
 * Return: Return the length of the *s.
 */

int _strlen(char *s)
{

	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
