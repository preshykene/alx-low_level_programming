#include "main.h"
/**
 * result - holds the result
 * @i: result int
 * @n: integer I'm testing
 * Return: value
 */
int result(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (result(i + 1, n));
	return (1);
}
/**
 * is_prime_number - is prime or not
 * @n: integer to compare
 * Return: boolean
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (result(i, n));
}
