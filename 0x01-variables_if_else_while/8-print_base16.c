#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int j;
	char k;

	for (j = 0 ; j < 10 ; j++)
		putchar(j + '0');
	for (k = 'a' ; k <= 'f' ; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
