#include "main.h"
/**
 * _strcat - string to concat two arrays
 *
 * @dest: destination of concat
 * @src: source of concat
 *
 * Return: Returns char value
 */
char *_strcat(char *dest, char *src)
{
	int i, length;

	for (length = 0; dest[length] != '\0'; length++)
	{}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';

	return (dest);

}
