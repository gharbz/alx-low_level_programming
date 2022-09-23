#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: output dest
 * @src: input source
 * @n: numbers of bytes to copy
 *
 * Return: copies string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0' ; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
