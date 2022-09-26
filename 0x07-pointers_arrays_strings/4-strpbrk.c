#include "main.h"
/**
* _strpbrk - finds string
* @s: string to find stuff
* @accept: accepting arrays
*
* Return: returns new value
*/
 char *_strpbrk(char *s, char *accept)
 {
 	int i;
	int j;

	for (i = 0; s[i] != '\n'; i++)
	{
		for (j = 0; accept[j] != '\n'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
