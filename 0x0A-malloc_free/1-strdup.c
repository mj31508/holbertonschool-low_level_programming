#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: character pointer that will be used to check
 * Return: Always 0.
 */

char *_strdup(char *str)
{

	char *s;
	unsigned int i = 0;

	if (str == 0)
	{
		return (NULL);

	}
	str = malloc(sizeof(char) * _strlen(str) + 1);

        while (i <_strlen(str) + 1)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
