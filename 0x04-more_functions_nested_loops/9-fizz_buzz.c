#include <stdio.h>

/**
 * main - Entry point
 * multiples of 3 with Fizz
 * multiples of 5 with Buzz
 * and multiples of 3 and 5 with FizzBuzz
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && 1 % 5 == 0)
			printf("FizzBuzz");
		else if (i %= 3)
			printf("Fizz");
		else if (i %= 5)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
