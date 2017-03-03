#include "holberton.h"

/**
 * _puts_recursion - prototype function for the s pointer.
 * @s: pointer that holds the value of a string
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;

	}
	_putchar(*s);
	_puts_recursion(s + 1);


}
