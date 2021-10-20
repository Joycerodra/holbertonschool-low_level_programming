#include "main.h"

/**
 * _mempcy- function that copies memory area
 * @n: bytes from memory area
 * @src : source
 * @dest: destination
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
			i++;
	}
	return (dest);
}
