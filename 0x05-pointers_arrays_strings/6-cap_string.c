#include "holberton.h"
/**
 *cap_string - A function prototype that capitalizes
 *@m: A variable holder
 *Return: o is returned.
 *
 */

char *cap_string(char *m)
{
	int j = 0;

	while (m[i] != '\0')
	{
		if (m[j] >= 'a' && m[j] <= 'z')
		{
			if (j == 0)
			{
				m[j] -= 32;
			}
			if (m[j - 1] == 32 || m[j - 1] == '\t' ||
			     m[j - 1] == '\n' || m[j - 1] == ',' ||
			     m[j - 1] == ';' || m[j - 1] == '.' ||
			     m[j - 1] == '!' || m[j - 1] == '?' ||
			     m[j - 1] == '"' || m[j - 1] == '(' ||
			     m[j - 1] == ')' || m[j - 1] == '{' ||
			    m[j - 1] == '}')
			{
				m[j] -= 32;
			}
		}
		j++;
	}
	return (m);
}
