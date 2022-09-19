#include "main.h"

/**
 * print_rev - reverse a string value
 * @s: print string in reverse
 */
 
void print_rev(char *s)
{
	int i;
	int len =0;
	
	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	
	_putchar('\n');
}
