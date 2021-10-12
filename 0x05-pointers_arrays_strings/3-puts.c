#include "main.h"

/**
 * _puts - main function
 * @str: pointer
 * Description: this function prints a string
 *
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

}
