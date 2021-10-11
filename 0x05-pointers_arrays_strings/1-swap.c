#include "main.h"

/**
 * swap_int - main function.
 * @a: Pointer, first integer.
 * @b: Pointer, second integer.
 *
 * Description: This function swaps the values of two integers.
 *
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;

}
