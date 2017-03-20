#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - function prototype to print string
 * @separator: const char string
 * @n: variable n
 *
 *
 * Return: 0
 **/




void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *p;

	va_list ap;

	va_start(ap, n);


	for (i = 0; i < n; i++)
	{
		p = va_arg(ap, char *);
		if (p != NULL)
		{
			printf("%s", p);

		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
