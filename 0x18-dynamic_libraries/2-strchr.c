#include "main.h"
/**
* _strchr - locates characters in string
* @s: string to locate char
* @c: string to find char
*
* Return: Character value
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
