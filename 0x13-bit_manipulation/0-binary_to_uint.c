#include "holberton.h"

/**
 * binary_to_uint - function that holds a constant character
 * @b: constan character pointer
 *
 *
 *
 * Return: The converted number or 0 if NULL
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int btoi;

	if (b == NULL)
		return (0);
	btoi = 0;
	while (*b)
	{
		btoi = btoi * 2;
		if (*b == '1')
			btoi += 1;
		else if (*b != '0')
			return (0);
		b++;
	}
	return (btoi);
}
