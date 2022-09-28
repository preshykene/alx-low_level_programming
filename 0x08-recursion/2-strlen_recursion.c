#include "main.h"
/**
* _strlen_recursion - prints length of string
* @s: string to count length
* Return: Returns length of string
*/
int _strlen_recursion(char *s)
{
	int i;
	if (*s)
	{
		i = _strlen_recursion(s + 1);
		return (i += 1)
	}
	return (0);
}		
