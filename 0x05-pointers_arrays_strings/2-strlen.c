#include "main.h"

/**
 * _strlen - main function.
 * @s: pointer
 *
 * Description: This function that returns the length of a string.
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);

}
