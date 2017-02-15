#include "holberton.h"
/**
 * print_times_table - prints the times table for n.
 * @n: multiplication table
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int i, j, total;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				total = (i * j);
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (total < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((total % 10) + '0');
				}
				else if (total >= 10 && total < 100)
				{
					_putchar(' ');
					_putchar((total / 10) + '0');
					_putchar((total % 10) + '0');
				}
				else if (total >= 100 && j != 0)
				{
					_putchar((total / 100) + '0');
					_putchar((total / 10) % 10 + '0');
					_putchar((total % 10) + '0');
				}
				else
					_putchar((total % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
