#include "main.h"

/**
 * string_toupper - main function, function that changes all lowercase letters
 * of a string to uppercase
 * @m:char
 *
 * Return: m
 */
char *string_toupper(char *m)
{

	int i = 0;

	while (m[i] != 0)
	{
		i++;
		if (m[i] >= 'a' && m[i] <= 'z')
		{
			m[i] = m[i] - 32;
		}

	}
	return (m);
}
