#include "holberton.h"

/**
 * rev_string - function prototype that holds a pointer
 *@s: variable pointer that holds the string
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i = 0;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}

	int j = 0;

	i--;

	while (j <= i)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j++;
		i--;
	}

}
