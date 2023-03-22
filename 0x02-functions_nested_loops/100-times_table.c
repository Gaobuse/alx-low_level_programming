#include "main.h"

/**
 * print_times_table -  prints the n times table, starting with 0.
 * @n: value to be printed
 * Return: 0
 */

void print_times_table(int n)
{
	int numb, multi, prod;

	if (n >= 0 && n <= 15)
	{
		for (numb = 0; numb <= n; numb++)
		{
			_putchar('0');
			for (multi = 1; multi <= n; multi++)
			{
				_putchar(',');
				_putchar(' ');
				prod = numb * multi;
				if (prod <= 99)
					_putchar(' ');

				if (prod <= 9)
				_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
				_putchar(((prod / 10)) % 10 + '0');
			}
			else if (prod <= 99 && prod >= 10)
			{
				_putchar((prod / 10) + '0');
			}
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
	}
}
