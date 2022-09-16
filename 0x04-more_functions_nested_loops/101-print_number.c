#include "main.h"

/**
 * print_number - print an integer without the use of pointers or arrays
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int tens, digits, positive = n;
	double Tang = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			positive = n * -1;
			_putchar('-');
		}
		while (Tang <= positive)
			Tang *= 10;
		tens = Tang / 10;

		while (tens >= 1)
		{
			digits = positive / tens;
			_putchar(digits + '0');
			positive = (positive - (tens * digits));
				tens / 10;
		}
	}
}
