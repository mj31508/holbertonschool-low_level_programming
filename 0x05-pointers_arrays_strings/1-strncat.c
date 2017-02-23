#include "holberton.h"

/**
 * strncat - holds two pointers and a n variable.
 *@dest: character pointer
 *@src: source pointer
 *@n: n variable to itereate with src
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
