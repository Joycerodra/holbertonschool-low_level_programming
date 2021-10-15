#include "main.h"

/**
 * reverse_array - main function.
 * @a: integer to reverse
 * @n: number of element of the array
 *
 * Description: This function reverse an array of integers.
 *
 */

void reverse_array(int *a, int n)
{
	int r, s, t;

	n = n -1;

	for (r = 0; r < n; r++)
{

	s = a[r];
	t = a[n];

	a[r] = t;
	a[n] = s;

	n--;
}

}
