#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: if n doesn't have a natural
 * square root the function should return -1
 *
 */

int _sqrt_recursion(int n)
{
	int i = 1;
		int r = 1;

	if (n == 0 || n == 1)
		return (n);

	while (r <= n)
	{
		i++;
		r = i * i;
	}
	return (i - 1);
	}
