#include "holberton.h"
/**
 *reverse_array - array reversal
 *@a:value variable
 *@n:n elements variable.
 *Return: 0.
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int t[100000];

	while (i < n)
	{
		t[i] = a[i];
		i++;
	}
	n--;
	i = 0;

	while (n >= 0)
	{
		a[n] = t[i];
		n--;
		i++;
	}
}
