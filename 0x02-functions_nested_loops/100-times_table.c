#include "main.h"

/**
 * print_times_table - main entry
 *
 * @n: integer to return
 *
 */

void print_times_table(int n)
{
	int a;
	int b;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				int product = a * b;

				if (b == 0)
				{
					_putchar('0');
				} else if (product <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + product);
				} else if (product > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (product / 100));
					_putchar('0' + (product / 10) % 10);
					_putchar('0' + (product % 10));
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (product / 10));
					_putchar('0' + (product % 10));
				}
			}
			_putchar('\n');
		}
	}
}
