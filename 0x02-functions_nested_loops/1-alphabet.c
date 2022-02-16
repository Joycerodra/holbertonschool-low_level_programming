#include "main.h"

/**
* print_alphabet - print alphabet from a to z
*
* Return: void
*/

#include "holberton.h"

/**
 * print_alphabet - check the code for Holberton School students.
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
