#include "holberton.h"

/**
 * _isalpha - checking for alphabetic characters.
 *@c: parameter that is compared within the if statements
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{

		return (1);
	}
	else
	{

		return (0);
	}
}
