#include <stdarg.h>
#include "variadic_functions.h"
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
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i != n - 1 )
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p);
}
