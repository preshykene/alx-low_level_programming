#include "main.h"

/**
 * print_last_digit - main func
 *
 * @n: assinged int
 * Return: value
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
