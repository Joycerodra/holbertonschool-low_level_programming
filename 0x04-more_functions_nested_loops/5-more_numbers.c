#include "main.h"

/**
 * more_numbers - main function
 *
 * Description: This function prints the numbers 10 times, from 0 to 14.
 *
 */
void more_numbers(void)
{
	int a, b;

		for (a = 0; a <= 14; a++)
		{
			for (b = 0; b <= 14; b++)
			{
				if (b >= 10)

					_putchar (b / 10 + '0');
				_putchar (b % 10 + '0');
			}
			_putchar ('\n');

		}
}
