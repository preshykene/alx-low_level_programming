#include "main.h"

/**
 * print_last_digit - main func
 *
 * @n: assinged int
 * Return: value
 */

int print_last_digit(int n)
{
	if (n < 0)
		lastDigit = -1 * (n % 10);
	else 
		lastDigit = n % 10;
	_putchar('0' + lastDigit);
	return (lastDigit);
}
