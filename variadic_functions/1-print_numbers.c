#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers separated by a string
 * @separator: string to print between numbers
 * @n: number of integers to print
 *
 * Description: This function prints all integer arguments passed
 * after the 'n' parameter, separated by the string 'separator'.
 * If 'separator' is NULL, no separator is printed. The separator
 * is printed only between numbers, not before the first one.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list task1;
	unsigned int i;

	va_start(task1, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i > 0)
		{
			printf("%s", separator);
			printf("%d", va_arg(task1, int));
		}
		else
			printf("%d", va_arg(task1, int));
	}

	printf("\n");
	va_end(task1);
}
