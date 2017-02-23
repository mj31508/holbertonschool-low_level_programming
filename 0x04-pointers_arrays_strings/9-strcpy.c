#include "holberton.h"

/**
 * *_strcpy - string copier
 * @dest: pointer to a string
 * @src: pointer to a buffer
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
