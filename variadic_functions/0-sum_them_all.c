#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of arguments passed to the function
 * Return: the sum of all the arguments, or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list task0;

	if (n == 0)
		return (0);
	va_start(task0, n);

	for (i = 0; i < n; i++)
		sum += va_arg(task0, int);
	va_end(task0);
	return (sum);
}
