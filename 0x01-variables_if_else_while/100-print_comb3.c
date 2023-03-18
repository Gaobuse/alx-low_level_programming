#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int j;
	int k;

	for (j = 0 ; j < 10 ; j++)
	{
		for (k = 1 ; k < 10 ; k++)
		{
			if (j < k && j != k)
			{
				putchar(j + '0');
				putchar(k + '0');
				if (j + k != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
