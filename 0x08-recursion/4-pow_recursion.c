#include "main.h"
/**
* _pow_recursion - prints the power of a number recursively
* @x: first parameter
* @y: second parameter
* Return: Returns result or -1
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
