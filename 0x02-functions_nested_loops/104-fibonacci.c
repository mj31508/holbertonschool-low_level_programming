#include <stdio.h>
/**
 * main - fibonacci numbers.
 * Return: Nothing.
 */
int main(void)
{
	int count;
	unsigned long i, j, k;
	unsigned long ia, ib, ja, jb, ka, kb, take;
	unsigned long total;

	count = 0;
	i = 0;
	j = 1;
	amount = 10000000000000000000;
	for (count = 1; count <= 91; count++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%d %lu\n", count + 1, k);
	}
	ia = i / total;
	ib = i % total;
	ja = j / total;
	jb = j % total;
	while (count <= 178)
	{
		take= (ib + jb) / total;
		ka = (ia + ja) + take;
		kb = (ib + jb ) - take * total;
		ia = ja;
		ib = jb;
		ja = ka;
		jb = kb;
		printf("%d %lu%018lu\n", count + 1, ka, kb);
		count++;
	}
	printf("%lu018", ka);
	return (0);
}
