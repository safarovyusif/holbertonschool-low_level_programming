#include "main.h"
/**
 * factorial - the factorial of a given number
 * @n: number
 * Return: returns the factorial of a given number
 *
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
