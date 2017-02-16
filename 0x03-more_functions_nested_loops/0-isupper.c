#include "holberton.h"

/**
 * _isupper - Funtion prototype to check if character is upper case
 *@c -  The argument that is going to be checked
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c != 'a' && c != 'z')
	{

		return (1);
	}

	else
	{
		return (0);
	}
}
