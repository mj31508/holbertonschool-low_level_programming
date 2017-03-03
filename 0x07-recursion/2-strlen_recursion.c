#include "holberton.h"

/**
 * _strlen_recursion - Function prototype the returns the length of a string
 *@s: variable pointer
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);


}
