#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: parameter to be assessed
 * Return: 1 if c is a letter
 * otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
