#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - A variadic function that has a int for number of arguments
 * @n: Represents the total number of variable arguments passed.
 *
 *
 *
 * Return: The sum of all of the parameters
 **/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap; /*object type*/

	va_start(ap, n); /*takes in parameters and num of args*/

	unsigned int i = 0;
	int sum = 0;

	if (n == '\0')
	{
		return (0);
	}

	while (i < n)
	{
		i++;
		sum += va_arg(ap, int); /*retrieves the next argument in param*/
	}
	va_end(ap);

	return (sum);

}
