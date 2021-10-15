#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 *@n: number of times the character \ is printed
 *
 **/

void print_diagonal(int n)
{
	int j;
	int m;

	if (n <= 0)

		_putchar('\n');

	for (j = 0; j < n; j++)
	{
		if (j > 0)
		{
			for (m = 0; m < j; m++)
			{

				_putchar(' ');
			}

			_putchar(92);
		}

		else

			_putchar(92);

		_putchar('\n');
	}

}
