#include "holberton.h"

/**
 * _memset - prototype function
 * @s: variable pointer
 * @b: character variable
 * @n: n variable
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
