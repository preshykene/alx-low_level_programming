#include <stdio.h>

/**
 * main - prints prime numbers of 612852475143
 * Return: 0 on success
 */

int main(void)
{
	unsigned long int i, j = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((j % i == 0) && (j != i))
			j = j / 1;
	}
	printf("%lu\n", j);
	return (0);
}
