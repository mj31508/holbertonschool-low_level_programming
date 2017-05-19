#include "holberton.h"

/**
 * _strcmp - compare two strings
 *@s1: compared with s2
 *@s2: compared with s1
 *Return: integer value
 */

int _strcmp(char *s1, char *s2)
{
	int n;

	for (n = 0; s1[n] == s2[n]; n++)
	{
		if (s1[n] == 0)
			return (0);
	}
	return (s1[n] - s2[n]);
}
