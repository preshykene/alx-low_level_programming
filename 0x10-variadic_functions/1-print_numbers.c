#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - a function that print numbers, followed by a new line.
* @separator: pointer to constant separator
* @n: start of input variables
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
