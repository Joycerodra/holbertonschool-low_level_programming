#include "main.h"

/**
 * _strncat - main function.
 * @dest: destination
 * @src: source
 * @n:bytes
 * Description: This function concatenates two strings.
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int k = 0;
	int l = 0;

	while (dest[j] != '\0')
	{
		j++;
	}

	while (src[k] != '\0')
	{
		k++;
	}
	for (; l < n; l++)
	{
		if (l < k)
		{
			dest[j] = src[l];
		j++;
		}
	}

	dest[j] = '\0';
	return (dest);
}
