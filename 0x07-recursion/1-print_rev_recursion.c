#include "holberton.h"


/**
 * _print_rev_recursion - prototype function that holds a pointer
 *@s: pointer to a string
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{

		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
