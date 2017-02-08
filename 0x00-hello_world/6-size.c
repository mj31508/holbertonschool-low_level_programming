#include <stdio.h>

/**
 * main - finding the size of characters
 *
 * Return: (0)
 */

int main(void)
{
	int size_char = sizeof(char);
	int size_int = sizeof(int);
	int size_long = sizeof(long);
	int size_long_long = sizeof(long long);
	int size_float = sizeof(float);

	printf("Size of a char: %d byte(s)\n", size_char);
	printf("Size of an int: %d byte(s)\n", size_int);
	printf("Size of a long int: %d byte(s)\n", size_long);
	printf("Size of a long long int: %d byte(s)\n", size_long_long);
	printf("Size of a float: %d byte(s)\n", size_float);
	return (0);
}
