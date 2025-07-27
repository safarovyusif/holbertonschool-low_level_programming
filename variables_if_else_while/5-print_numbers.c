#include <stdio.h>

/**
 * main - 0-dan 9-a qədər olan rəqəmləri çap edir
 *
 * Return: 0 (uğurlu icra)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
