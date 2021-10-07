#include "main.h"

/**
 * main - program to print alphabet from a to z
 * print_alphabet - prints the all alphabet from a to z one by one
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar (i);
	}
	_putchar('\n');
}
