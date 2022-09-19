#include "main.h"

/**
 * print_rev - reverse a string value
 * @s: print string in reverse
 */

void print_rev(char *s)
{
	int len = 1;
	int i;

	while (*s != '\0')
	{
		len++;
		++s;
	}
	s--;

	for (i = len; i > 1; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
