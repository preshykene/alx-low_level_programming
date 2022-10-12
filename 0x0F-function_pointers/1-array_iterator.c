#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
* array_iterator - iterates through an array
* @array: array to go through
* @size: size of array
* @action: action funtion to take
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		exit(98);
	for (; i < size; i++)
	{
		action(array[i]);
	}
}
