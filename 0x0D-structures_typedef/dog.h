#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure defined by the name dog
 * @name: access argument
 * @age: access argument
 * @owner: access argument
 **/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
