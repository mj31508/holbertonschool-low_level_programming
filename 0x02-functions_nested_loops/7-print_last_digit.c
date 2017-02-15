#include "holberton.h"

/**
 * print_last_digit - getting the last digit
 *@n: stores the last digit to go through each condition
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int other = n % 10;

	if (n < 0)

	{
		n = n * -1;

		_putchar(n % 10 + '0');
		return (n % 10);
	}
	else
	{
		_putchar(other + '0');
		return (n % 10);
	}
}
