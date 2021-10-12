#include "main.h"

/**
 * puts2 - main function.
 * @str: Pointer, the string to print.
 *
 * Description: This function prints every other character of a string
 *
 */

void puts2(char *str)
{
	int i = 0, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		j = i % 2;
		if (j == 0)
		{
			_putchar(str[i]);
		}

	}

	_putchar('\n');

}
