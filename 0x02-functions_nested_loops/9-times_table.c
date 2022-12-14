#include "main.h"

/**
 * main - times_tables - prints times table
 * Return: void
 */

void time_table(void)
{
	int a = 0;
	int b;
	int rep;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			rep = a * b;
			if (b == 0)
			{
				_putchar('0' + rep);
			}
			else if (rep < 10)
			{
				_putchar(' ');
				_putchar('0' + rep);
			}
			else
			{
				_putchar('0' + rep / 10);
				_putchar('0' + rep % 10);
			}

			if (a < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
