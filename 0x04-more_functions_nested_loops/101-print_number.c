#include "main.h"

/**
 * print_number - print an integer without the use of pointers or arrays
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int positive = n;

	if (n < 0)
		_putchar('0');
		positive = -positive;

		if (n < 0)
		{
			positive = n * -1;
			_putchar('-');
		}
		
		if ((positive / 10) > 0)
			print_number(positive / 10);

		_putchar((positive % 10) + 48);
}
