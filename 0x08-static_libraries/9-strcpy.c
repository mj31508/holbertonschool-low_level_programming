#include "holberton.h"

/**
 * *_strcpy - prototype function
 *@dest: pointer for string
 *@src: pointer to string
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}

	i++;
	*(dest + i) = 0;
	return (dest);
}
