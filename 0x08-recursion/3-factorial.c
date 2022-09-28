#include "main.h"
/**
* factorial - gives factorial of a given number
* @n: number to accept
* Return: returns the factor or -1
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (1);
}
