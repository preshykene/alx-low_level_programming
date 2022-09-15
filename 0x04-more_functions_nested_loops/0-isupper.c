#include "main.h"
/**
 * _isupper - checks if c is uppercase
 * @c: assigned integer to check c
 *
 *Return: 1 or 0
 */
int _isupper(int c)
{
	if (c <= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
