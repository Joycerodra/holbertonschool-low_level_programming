#include "main.h"

/**
 * _strcat - main function.
 * @dest: destination
 * @src: source
 *
 * Description: This function concatenates two strings.
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int j = 0;
	int l = 0;

	while (dest[j] != '\0')
	{
		j++;
	}

	while (src[l] != '\0')
	{
		dest[j] = src[l];
		l++;
		j++;

	}
	dest[j] = '\0';
	return (dest);
}
