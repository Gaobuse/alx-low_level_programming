#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: num being assessed
 * Return: last digit number
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
	{
	m = m * -1;
	}
	_putchar(m + '0');
	return (m);
}
