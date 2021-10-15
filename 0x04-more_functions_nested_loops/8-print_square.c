#include "main.h"

/**
 * print_square - main function.
 * @size: square size
 *
 * Description: This function print a square.
 *
 */
void print_square(int size)
{
	int w;
	int h;

	if (size <= 0)
		_putchar('\n');

	else

		for (h = 0; h < size; h++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}

}
