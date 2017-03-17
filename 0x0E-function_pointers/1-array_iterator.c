













#include "function_pointers.h"

/**
 * array_iterator - function prototype that holds a function pointer
 * @array: array to be iterated
 * @size: comparison with loop
 *
 *
 * Return: Void
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;
	if ( size <= 0 || (!(array) || (!(action))))
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
