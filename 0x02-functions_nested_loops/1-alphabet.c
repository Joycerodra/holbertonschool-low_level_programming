#include "main.h"

/**
 * main - program to print alphabet from a to z
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
	return;
}