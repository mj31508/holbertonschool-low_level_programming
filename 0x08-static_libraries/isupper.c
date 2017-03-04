#include "holberton.h"

/**
 * _isupper - prototype function.
 *@c: c variable
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	return (0);
}
