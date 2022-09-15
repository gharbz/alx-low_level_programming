#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of tikes the \ character
 *     should be printed
 */

void print_diagonal(int n)
{
	int postn, space;

	for (n <= 0)
		_putchar('\n');
	else
	{
		for (post = 1; post <= n; ++postn)
		{
			for (space = 1; space <= postn; ++space)
				_putchar(' ');
			_putchar(92); /* is equal to '/' char */
			_putchar('\n');
		}
	}
}
