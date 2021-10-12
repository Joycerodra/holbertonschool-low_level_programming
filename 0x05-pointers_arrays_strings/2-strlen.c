#include "main.h"

/**
 * _strlen - main function.
 * @s: pointer
 *
 * Description: This function that returns the length of a string.
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);

}
