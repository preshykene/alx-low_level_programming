#include "main.h"

/**
*main - swaps two integer
*@a: integer assigned to a
*@b: integer assigned to b
*
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*a = d;
	*b = c;
}
