#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @str: input string
 *
 * Return: uppercase
 */

char *string_toupper(char *str)
{
	int f;

	for (f = 0; str[f] != '\0'; f++)
	{
		if (str[f] >= 'a' && str[f] <= 'z')
		{
			str[f] = str[f] - 32;
		}
	}
	return (str);
}
