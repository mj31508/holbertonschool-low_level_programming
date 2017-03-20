#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - function prototype that holds a const char pointer
 * @separator: printing a comma
 * @n: printing number
 * Return: 0
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;

	i = 0;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{

		if (i < n - 1 && separator != NULL)
		{
			printf("%d %s", va_arg(ap, int), separator);
		}

		else
		{
			printf("%d", va_arg(ap, int));
		}

	}
	va_end(ap);
	printf("\n");
}
