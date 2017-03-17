#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	int total1;
	int total2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv2[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);

	}

	if (num2  == 0 && (*argv[2] == '%' || *argv[2] == '/')
		{
			printf("Error\n");
			exit(100);
		}
		f = get_op_func(argv[2]);
		if (f == NULL)
		{
			printf("Error\n");
			exit(99);

		}
		printf("%d\n", f(num1, num2));
		return (0);
		}
