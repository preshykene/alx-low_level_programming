#include <stdio.h>

/**
 * main - entry point
 *
 * Return: set to 0
 */

int main(void)
{
	int count = 0;
	long int a = 1;
	long int b = a + 1;
	long int c = 1;

	while (b < 4000000)
	{
		a = b;
		b = c;
		c = a + b;
		if ((c < 4000000) && (c % 2 == 0))
		{
			count += c;
		}
	}
		printf("%d\n", count);
		return (0);
}
