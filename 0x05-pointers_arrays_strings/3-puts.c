#include "main.h"

/**
* _puts - puts a string
*
* @str: string to print
*/

void _puts(char *str)
{
	char i;

	for (i = 0; *(str + i) != '\0'; i++)
		_puts(str);
}
