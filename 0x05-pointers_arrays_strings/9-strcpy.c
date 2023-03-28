#include "main.h"
/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: char to be assessed
 * @src: char to be assessed
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
