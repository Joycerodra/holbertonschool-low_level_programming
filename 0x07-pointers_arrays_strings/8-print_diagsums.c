#include "main.h"


/**
 * print_diagsums - this function prints diagonal sums.
 * @a: pointer
 * @size: column size
 */

void print_diagsums(int *a, int size)
{

	int i, j = 0;

		for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				i += a[i]*a[j];

			if ((i + j) == (size - 1))
				j += a[i]*a[j];
		}
	}
}
