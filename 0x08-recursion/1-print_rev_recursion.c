#include "main.h"

/**
 * _print_rev_recursion - main function prints string in reverse
 * @s: pointer
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);

	}

}
