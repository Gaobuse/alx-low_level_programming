#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: char to be assessed
 * Return: 0
 */

int _strlen(char *s)

{
	int i = 0;

	for (; *s++;)
		i++;
	return (i);
}
