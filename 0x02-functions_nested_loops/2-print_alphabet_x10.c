#include "holberton.h"

/**
 * print_alphabet_x10 - void prototype
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char a = 'a';
	int temp = 0;

	while (temp <= 9)

	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;

		}

		temp++;
		_putchar('\n');
	}
}
