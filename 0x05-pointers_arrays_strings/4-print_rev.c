#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: pointer string
 *
 **/
void print_rev(char *s)
{

	int i = 0;
		int y;

		while (s[i] != '\0')
			i++;
		for (y = i - 1; y >= 0; y--)
		{
			_putchar(s[y]);
		}
		_putchar('\n');

}
