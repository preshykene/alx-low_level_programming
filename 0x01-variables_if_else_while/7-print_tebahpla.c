#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always Return 0
 *
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar (a);
	putchar('\n');
	return (0);
}
