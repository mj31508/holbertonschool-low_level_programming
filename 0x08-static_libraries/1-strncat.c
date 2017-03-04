#include "holberton.h"

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, length = 0;

	while (dest[length])
		length++;
	while (index < n && src[index])
	{
		dest[length++] = src[index++];
	}
	return (dest);
}
