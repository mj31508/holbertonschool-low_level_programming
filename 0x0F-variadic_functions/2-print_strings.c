#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

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

	i = 0;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i < n - 1 && separator != NULL)
		{
			printf("%s%s", va_arg(ap, char *), separator);

		}
		else if (separator == NULL)
		{
			separator = "";
		}
		else
		{
			printf("%s", va_arg(ap, char *));
		}
	}
	printf("\n");
	va_end(ap);
}
