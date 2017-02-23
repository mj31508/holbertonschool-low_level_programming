#include "holberton.h"
/**
 *_strncpy - a function that copies
 *@dest: a variable pointer.
 *@src: a variable pointer that holds a string
 *@n: a variable that copies bytes
 *Return: final string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
