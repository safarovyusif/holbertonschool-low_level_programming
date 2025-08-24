#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings passed as arguments
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 *
 * Description: This function prints all strings passed as arguments.
 * If a string is NULL, it prints (nil) instead. If separator is not
 * NULL, it is printed between the strings. A newline is printed at
 * the end.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list task2;

	va_start(task2, n);

	for (i = 0; i < n; i++)
	{
		char *s = va_arg(task2, char*);

		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(task2);
	printf("\n");
}
