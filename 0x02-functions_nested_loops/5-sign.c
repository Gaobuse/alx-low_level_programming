#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the sign of a number
 * @n: parameter being assessed
 * Return: 1 for positive num, -1 for negative or 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (-1);
	}
}
