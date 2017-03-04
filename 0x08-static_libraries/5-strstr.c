#include "holberton.h"

/**
 * _strstr - prototype function
 * @haystack: search string
 * @needle: string
 *Return: Pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *begin;
	char *look;

	while (*haystack != '\0')
	{
		begin = haystack;
		look = needle;
		while (*look == *haystack && *haystack != 0 && *look != 0)
		{
			haystack++;
			look++;
		}
		if (*look == 0)
			return (begin);
		haystack = begin + 1;
	}
	return (0);
}
