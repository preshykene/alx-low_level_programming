#include "main.h"

/**
 * print_last_digit - main func
 *
 * @n: assinged int
 * Return: value
 */

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		lastdigit = -1 * (n % 10);
	else
		lastdigit = n % 10;

	_putchar('0' + lastdigit);
	return (lastdigit);
}
