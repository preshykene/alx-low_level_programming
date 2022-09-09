#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
0 * Return: always Return 0
 *
 */
int main(void)
{
	int i = 0;

	for (; i < 10; i++)
		putchar('0' + i);
	putchar('\n');
	return (0);
}
