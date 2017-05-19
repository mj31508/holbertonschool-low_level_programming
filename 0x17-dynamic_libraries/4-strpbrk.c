#include "holberton.h"

/**
 * _strpbrk - search string @s for the first occurance of any bytes of @accept
 *@s: pointer variable
 * @accept: character variable
 *Return: a pointer or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int n;
	n = 0;
	i = 0;

	while (s[i])
	{
		n = 0;
		while (accept[n])
		{
			if (accept[n] == s[i])
				return (s + i);
			n++;
		}
		i++;
	}
	return ('\0');
}
