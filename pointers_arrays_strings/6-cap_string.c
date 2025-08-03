#include "main.h"

/**
 * cap_string - stringin ilk herfini boyuk herf edir
 * @s: ssss
 *
 * Return: return edirrrr
 */
char *cap_string(char *s)
{
	int i = 0;
	int j;

	char separators[] = " \t\n,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	while (s[i] != '\0')
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (s[i] == separators[j] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			{
				s[i + 1] -= 32;
				break;
			}
		}
		i++;
	}

	return (s);
}
