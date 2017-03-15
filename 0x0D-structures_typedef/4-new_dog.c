#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - return the length of a string
 *
 * @s:string whose length to return
 *
 * Return: length of @s
 */
int _strlen(char *s)
{
	int n, m = 0;

	while (*(s + m) != '\0')
	{
		++n;
		m++;
	}
	return (n);
}

/**
 * *_strcpy - prototype function
 *@dest: pointer for string
 *@src: pointer to string
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}

	i++;
	*(dest + i) = 0;
	return (dest);
}

/**
 * new_dog - function prototype for struct
 * @name: pointer char
 * @age: floater
 * @owner: pointer to char
 * Return: struct
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	int len = 0;
	int len2 = 0;
	dog_t *fido;

	if (name == NULL || owner == NULL)
		return (NULL);

	fido = malloc(sizeof(dog_t));

	if (fido == NULL)
		return (NULL);
	len = _strlen(name);
	fido->name = malloc(len * sizeof(char) + 1);

	if (fido->name == NULL)
	{
		free(fido);
		return (NULL);
	}
	_strcpy(fido->name, name);

	len2 = _strlen(owner);
	fido->owner = malloc(len2 * sizeof(char) + 1);

	if (fido->owner == NULL)
	{
		free(fido->name);
		free(fido);
		return (NULL);
	}
	_strcpy(fido->owner, owner);
	fido->age = age;
	return (fido);
}
