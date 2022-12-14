#include "main.h"
#include <stdio.h>

/**
 * _strlen - finding length of a string
 * @s: pointing to the string to check
 * Return: void
*/

int _strlen(char *s)
{
int l = 0;
while (s[l])
l++;
return (l);
}
