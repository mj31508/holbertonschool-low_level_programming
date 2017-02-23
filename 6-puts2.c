#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i = 0;
	char s;

	while (s[i] != '\0')
	{
		if ( i %  2 == 0)
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
