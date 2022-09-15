#include <stdio.h>

/**
 * main - prints prime numbers of 612852475143
 * Return: 0 on success
 */

int main(void)
{
	unsigned long num = 612852475143;
	unsigned long divisor = 2;

	while (divisor < num)
	{
		if (num % divisor == 0)
		{
			num /= divisor;
			divisor = 2;
		}
		else
			divisor++;
	}
	printf("%lu", num);
	return (0);
}
