#include "holberton.h"
/**
 *_strcmp - comparing two strings
 *@s1: variable holding two strings
 *@s2: second string holder
 *Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int a = 0;
	int b = 0;

	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (a > b)
	{
		return (s1[b]);
	}
	else if (a < b)
	{
		return (s2[a] * -1);
	}
	return (0);
}
