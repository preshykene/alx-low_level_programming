#include "main.h"
#include <stdio.h>
/**
* _strspn - prefix of substring
* @s: string to go through
* @accept: accepted bytes
* Return: Returns unsigned values
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int length = 0;

	for (i = 0; s[i] != '\n'; i++)
	{
		for (j = 0; s[j] != '\n'; j++)
		{
			if (s[i] == accept[j])
			{
			length++;
			break;
			}
		}
		if (s[j] != '\n')
			return (length);
	}
	return (length);
}
