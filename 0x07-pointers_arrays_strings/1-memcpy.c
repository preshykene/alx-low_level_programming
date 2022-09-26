#include "main.h"
/**
* _memcpy - copies and fills dest from src
* @dest: destination to copy to
* @src: source to copy from
* @n: nth amount of times
*
* Return: values of dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
