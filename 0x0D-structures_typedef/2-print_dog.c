#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - void function
 * @d: variable pointer
 *
 * Return: Nil if failed
 **/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: %s\n", d->name);
		else
			printf("%s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)");
		else
			printf("%s\n", d->owner);
	}
}
