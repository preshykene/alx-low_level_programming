#include <unistd.h>

/**
 * _putchar - prints characters
 * @c: character to print out
 * Return: on success 1
 * 	on error, returns -1 and errno is set approprately
 */

int _putchar(char* c)
{
	return(write(1, &c, 1));
}
