#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure defined by the name dog
 * @name: access argument
 * @age: access argument
 * @owner: access argument
 **/

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

int _putchar(char c);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
