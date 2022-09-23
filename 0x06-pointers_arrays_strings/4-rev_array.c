#include "main.h"

/**
 * reverse_array - reverses content of an array of integers
 * @a: input array
 * @n: number of element of an array
 *
 */

void reverse_array(int *a, int n)
{
	int c, last;

	last = n - 1;
	for (c = 0; c < n / 2; c++)
	{
		int start, end;

		start = a[c];
		end = a[last];
		a[c] = end;
		a[last] = start;
		last--;
	}
}
