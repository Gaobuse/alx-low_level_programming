#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int j;

	for (j = 0 ; j < 10 ; j++)
		putchar(j + '0');
	putchar('\n');
	return (0);
}
