#include "main.h"

/**
 * _puts_recursion - this function prints a string.
 * @s:pointer
 *
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i])
	{

		_putchar(s[i]);
		i++;
		_puts_recursion(s + i);
	}
	else
		_putchar('\n');
}
