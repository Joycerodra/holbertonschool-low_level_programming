#include "main.h"

/**
 * *_strcpy - main function.
 * @dest: destination
 * @src: origin
 * Description: This function copie the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = src[i];

	return (dest);

}
