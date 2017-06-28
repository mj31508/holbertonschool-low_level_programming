#include "sort.h"

/**
 * bubble_sort- function that holds a pointer to an array
 * @array: pointer to a int
 * @size: The size of an array
 * @Return: Always 0
 **/

void bubble_sort(int *array, size_t size)
{
	int tmp;
	unsigned int i = 0;
	size_t counter = size;

	while(counter > 0)
	{
		for(i = 0; i < counter - 1; i++)
		{
			if (array[i] > array[i+1])
			{
				tmp = array[i + 1];
				array[i+1] = array[i];
				array[i] = tmp;
				print_array(array,size);
			}
		}
		counter--;
	}
}
