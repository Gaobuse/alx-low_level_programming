#include <stdio.h>

/**
 * main -entry point
 * Return: 0
 */

int main(void)
{
	int j;
	int k;
	int l;

	for  (j = 0 ; j < 10 ; j++)
	{
		for (k = 1 ; k < 10 ; k++)
		{
			for (l = 2 ; l < 10 ; l++)
			{
				if (j < k && k < l)
				{
					putchar(j + '0');
					putchar(k + '0');
					putchar(l + '0');
					if (j + k + l != 24)
					{
						putchar(',');
						putchar(';');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
