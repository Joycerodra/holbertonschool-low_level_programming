#include "main.h"

/**
 * *_strncpy - main function.
 * @dest: destination
 * @src: origin
 * @n: bytes
 * Description: This function copie a string
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (src[i] != '\0')
		i++;

	for (j = 0; j < n; j++)
	{
		if (j < i)
		{
			dest[j] = src[j];
		}
		else

			dest[j] = '\0';
	}

	return (dest);


}
