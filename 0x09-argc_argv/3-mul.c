#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that holds argc and argv
 * @argc: argument count
 * @argv: argount holder for a string
 * Return: 1 if error 0 if passed
 **/

int main(int argc, char *argv[])
{
	int total = 0;
	int i = 1;
	int j = 2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[i]) * atoi(argv[j]);
	printf("%d\n", total);
	return (0);
}
