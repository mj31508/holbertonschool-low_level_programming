#include <stdio.h>
/**
 * main - function for argument count and vector
 * @argc: argument count that isn't used
 * @argv: argument vector
 * Return: 0
 ***/

int main (int argc, char *argv[])
{


	while(argc--)
	{
		printf("%s\n", *argv++);

	}
	return (0);
}
