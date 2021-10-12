#include "main.h"

/**
 * rev_string - main function.
 * @s: pointer
 *
 * Description: This function reverse a string.
 * Return: 0
 */
void rev_string(char *s)
{

	int i = 0;
	int j;
	char a, b;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;
	for (j = 0; j <= i; j++)
	{
		a = s[j];
		b = s[i];
		s[i] = a;
		s[j] = b;
		i--;
	}
}
