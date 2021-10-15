#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 *
 * @m: String
 *
 * Return: Capitalized string
 */

char *cap_string(char *m)
{
	int i = 0;

	while (m[i] != '\0')
	{
		if (m[i] == 32 || m[i] == '\n' || m[i] == 44 || m[i] == 59
			    || m[i] == 46 || m[i] == 33 || m[i] == 63 || m[i] == 34
				|| m[i] == 40 || m[i] == 123 || m[i] == 125 || m[i] == '\t')
		{
			if (m[i + 1] <= 122 && m[i + 1] >= 97)
			{
				m[i + 1] = m[i + 1] - 32;

			}

		}

		if (m[0] <= 122 && m[0] >= 97)
		{
			m[0] = m[0] - 32;

		}

		i++;
	}
	return (m);
}
