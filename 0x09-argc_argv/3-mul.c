#include <stdio.h>
#include <stdlib.h>

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
