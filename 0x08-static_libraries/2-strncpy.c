#include "holberton.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i = n;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}