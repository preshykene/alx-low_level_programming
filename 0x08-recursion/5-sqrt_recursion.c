#include "main.h"
/**
 * result - holds result
 * @i: integer to guess
 * @n: integer to get root of
 * Return: value of root
 */
int result(int i, int n)
{
	int j;

	if (i * i != n)
	{
		if (i > n)
		{
			return (-1);
		}
		j = result(i + 1, n);
		return (j + 1);
	}
	return (0);
}
/**
 * _sqrt_recursion - returns square root
 * @n: integer to return
 * Return: returns int of squareroot
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (result(i, n) == n && n != 1)
		return (-1);
	return (result(i, n));

}
