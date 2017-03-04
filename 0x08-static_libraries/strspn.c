#include "holberton.h"

/**
 * _strspn - prototype function
 *@s: variable to search
 * @accept: comparison variable
 *Return: n of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int n = 0;
	int num = 0;
	int up = 0;

	while (s[i] && up == i)
	{
		while (accept[n] && !(num))
		{
			if (accept[n] == s[i])
			{
				up++;
				num = 1;
			}
			n++;
		}
		n = 0;
		num = 0;
		i++;
	}
	return (up);
}
