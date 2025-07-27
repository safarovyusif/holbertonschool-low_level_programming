#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	char line[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; i < 10; i++)
	{
		int j = 0;

		while (line[j] != '\0')
		{
			_putchar(line[j]);
			j++;
		}
	}
}
