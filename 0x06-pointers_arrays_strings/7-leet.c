#include "main.h"

/**
 * leet - Encodes a string into 1337.
 *
* @m: String.
 *
* Return: String in 1337.
 */

char *leet(char *m)
{
	int i, j;
	char p[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char q[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; m[i] != '\0'; i++)
	{
		for (j = 0; p[j] != '\0'; j++)
		{
			if (m[i] == p[j])
			{
				m[i] = q[j];
			}

		}

	}
	return (s);

}
