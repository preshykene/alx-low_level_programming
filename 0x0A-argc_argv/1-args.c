#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* @argc: argument count
* @argv: argument vector
* Return: always set to 0
*/

int main(int __attribute__((unused)) argc, char *argv[])
{
	int i = 0, m;

	while (i < argc)
	{
		m = i;
		i++;
	}
	printf("%d\n", m);
	return (0);
}
