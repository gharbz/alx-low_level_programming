#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: input 1
 * @s2: input 2
 *
 * Return: returns 0 if both strings are equal
 */

int _strcmp(char *s1, char *s2)
{
	for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
		;
	if (*s1 == s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
