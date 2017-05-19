#include "holberton.h"

/**
 * _strchr - function prototype
 *@s: pointer to string
 * @c: character pointer
 *Return: pointerbplus variable
 */
char *_strchr(char *s, char c)
{
	int n = 0;

	while (s[n] != 0)
	{
		if (s[n] == c)
			return (s + n);
		n++;
	}

	if (s[n] == c)
		return (s + n);
	return ('\0');
}
