#include "main.h"

/**
 * _islower - checks if c is lower then returns a value
 *
 *@c: integer assigned to c
 *
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
