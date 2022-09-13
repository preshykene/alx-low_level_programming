#include "main.h"

/**
 *main - Entry point
 *
 *print_alphabet: prints alphabets
 *
 *Return: always set 0;
 *
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar("\n");

	return print_alphabet;
}
