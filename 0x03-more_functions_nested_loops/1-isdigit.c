#include "holberton.h"

/**
 * int _isdigit - Function prototype to check for digits
 *@c: variable being used to check the range of 0 and 9
 *
 * Return: 1 if variable is a digit or zero if it isn't
 **/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
