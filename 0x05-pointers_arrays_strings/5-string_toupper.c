#include "holberton.h"
/**
 *string_toupper - prototype function to change letters to uppercase
 *@o: o variable
 *.
 *Return: 0
 */

char *string_toupper(char *o)
{
	int i = 0;

	while (o[i] != '\0')
	{
		if (o[i] >= 'a' && o[i] <= 'z')
		{
			o[i] -= 32;
		}
		i++;
	}
	return (o);
}
