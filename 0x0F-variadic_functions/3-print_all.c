#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_char - helper function that holds a list
 * @ap: argument list
 * Return: void
 **/

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - helper function that holds a list
 * @ap: argument list
 * Return: void
 **/

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_string - helper function that holds a list
 * @ap: argument ;ist
 * Return: void
 **/
void print_string(va_list ap)
{
	char *pstring;

	pstring = (va_arg(ap, char*));

	printf("%s", pstring);
}



/**
 * print_float - helper function that holds a list
 *  @ap: argument list
 * Return: void
 **/

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_all - function that holds a various amount of arguments and const
 * @format: holds characters and strings and outputs them
 *
 * Return: void
 **/

void print_all(const char * const format, ...)
{
	s arg[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}

	};

	unsigned int i;

	unsigned int j;

	char *split;

	va_list ap;

	va_start(ap, format);

	i = 0;
	split = "";
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (arg[j].input != NULL)
		{
			if (format[i] == arg[j].input[0])
			{
				printf("%s", split);
				arg[j].f(ap);
				split = ", ";
			}
			j++;
		}
	i++;
	}
	va_end(ap);
	printf("\n");
}
