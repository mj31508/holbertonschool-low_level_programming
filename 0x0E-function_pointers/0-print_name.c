#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function prototype that holds a void pointer
 * @name: pointer to character
 * @f: pointer to void
 * @*: pointer to char
 * Return: Void
 **/

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
