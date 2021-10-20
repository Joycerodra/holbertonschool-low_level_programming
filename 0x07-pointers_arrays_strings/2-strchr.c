#include "main.h"

/**
 * _strchr - function that locates char in a string
 * @s: string
 * @c: char
 * Return: char or null
 */

char *_strchr(char *s, char c)
{
	int a = 0;
	int b;

	while (s[a] != '\0')
		a++;

	for (b = 0; b <= a; b++)
	{
		if (s[b] == c)

			return (s + b);
	}
	return ('\0');

}
