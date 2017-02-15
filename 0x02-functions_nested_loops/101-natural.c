#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples of
 * 3 or 5 below 1024.
 * Return: Nothing.
 */

int main(void)
{
	int n, total;

	for (n = 0; n < 1024; n++)
		if (n % 3 == 0 || n % 5 == 0)
			total += n;
	printf("%d\n", total);
	return (0);
}
