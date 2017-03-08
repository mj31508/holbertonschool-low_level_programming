#include "holberton.h"
#include <stdlib.h>


/**
 * _strdup - returns a pointer to a new string
 * @str: character pointer that will be ued to check
 * Return: Always 0.
 **/

char *_strdup(char *str)
{

	char *s;
	int i;
	int len;

	if (str == NULL)
	{
		return (NULL);

	}
	len = _strlen(str) + 1;
	s = malloc(sizeof(char) * len);

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

/**
 * _strlen - return the length of a string
 * @s: string whose length to return
 *
 * Return: length of @s
 */
int _strlen(char *s)
{
	int n = 0;
	int m = 0;

	while (*(s + m) != '\0')
	{
		++n;
		m++;
	}
	return (n);
}
