#include <stdio.h>
#include "holberton.h"
/**
 * print_array - array function
 * @a: array for elements
 * @n: n of elements
 */
void print_array(int *a, int n)
{
	int j;

	j = 0;
	while (i < n)
	{
		if (j != n - 1)
			printf("%d, ", a[j]);
		else
			printf("%d", a[j]);
		j++;
	}
	putchar('\n');
}
