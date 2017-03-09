#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - function prototype that holds two vaiables
 * @s1: character variable
 * @s2: character variable
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{

	int i;
	int n;
	char *s3;

	if (s1 == '\0')
	{
		s1 = "";

	}

	if (s2 == '\0')
	{
		s2 = "";
	}

	s3 = malloc(_strlen(s1) + _strlen(s2) + 1);
	i = 0;
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	n = 0;
	while (s2[n] != '\0')
	{
		s3[i] = s2[n];
		i++;
		n++;

	}
	free (s3[i]);
	s3[i] = '\0';
	return (s3);




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
