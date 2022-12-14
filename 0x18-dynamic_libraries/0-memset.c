#include "main.h"
/**
* _memset - fills the first n bytes
* @s: value to be set
* @b: value to be set at
* @n: nth amount of times
*
* Return: values of s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
