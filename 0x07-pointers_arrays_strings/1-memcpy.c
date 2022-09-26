#include "main.h"
/**
* _memset - fills the first n bytes
* @s: value to be set
* @b: value to be set at
* @n: nth amount of times
*
* Return: values of s
*/

char *_memcpy(char *dest, char src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
