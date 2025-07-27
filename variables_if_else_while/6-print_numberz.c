#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
		putchar(48 + i++); /* '0' = 48 ASCII-də */

	putchar('\n');
	return (0);
}
