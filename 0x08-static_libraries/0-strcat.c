#include "holberton.h"

/**
 * _strcat - function prototype holding two pointers
 *@dest: destination pointer
 *@src: source pointer
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;

	}
	dest[i] = '\0';
	return (dest);
}
