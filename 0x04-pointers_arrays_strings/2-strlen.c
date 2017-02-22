#include "holberton.h"
#include <stdio.h>

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
