#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - creates an array
* @size: size of an array to create
* @c: character to initialize to
* Return: Returns value of c
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *t;

	if (size <= 0)
		return (NULL);
	t = malloc(sizeof(char) * size);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		t[i] = c;
	return (t);
}
