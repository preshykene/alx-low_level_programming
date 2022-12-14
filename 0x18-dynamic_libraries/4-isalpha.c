#include "main.h"

/**
 * _isalpha - checks if c is lower then returns a value
 *
 *@c: integer assigned to c
 *
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
