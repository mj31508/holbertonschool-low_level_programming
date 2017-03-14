#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that holds variable pointers with a void type
 * @d: pointer character that is at the address of dog
 * @name: pointer that points to a string
 * @age: float
 * @owner: pointer variable that points to the character address
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)

	while (d != NULL)
	{
		d->name = name;
		d->age = age;
		d-> owner = owner;
	}
