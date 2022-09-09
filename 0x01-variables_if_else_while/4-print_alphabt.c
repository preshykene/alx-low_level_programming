#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: always Return 0
 *
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if ( a == 'q' || a == 'e')
		{
			continue;
		}
		putchar (a);
	}
	putchar('\n');
	return (0);
}
