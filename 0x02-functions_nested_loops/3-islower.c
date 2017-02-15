#include "holberton.h"

/**
 * _islower - prototype that holds a int as a parameter.
 *@c: int
 * Return: Always 0.
 */


int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);

		}
	else
	{
		return (0);
	}
}
