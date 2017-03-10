#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenating two strings
 * @s1: character variable that we will get the length of
 * @s2: character variable that we will get the length of
 * @n: unsigned int that we will compare our string length with
 * Return: Pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	char *ptr;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}
	len2 = len2 + 1;

	if (n <= len2)
	{
		len2 = n;
	} ptr = malloc((len1 + len2) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		ptr[i] = s2[j];
		i++; }
	return (ptr);
}
