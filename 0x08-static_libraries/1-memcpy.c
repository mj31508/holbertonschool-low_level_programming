#include "holberton.h"

/**
 * _memcpy - prototype function for dest, src and n
 * @dest: destination
 * @src: source
 * @n: n variable
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
