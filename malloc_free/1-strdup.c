#include "main.h"
#include <stdlib.h>

/**
 * my_length - Returns the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string
 */
unsigned int my_length(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * _strdup - Creates a duplicate of a string
 * @str: The string to duplicate
 *
 * Return: Pointer to the new string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *cpy;
	unsigned int i;
	unsigned int len;

	if (str == NULL)
		return (NULL);

	len = my_length(str) + 1;

	cpy = malloc(len * sizeof(char));
	if (cpy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		cpy[i] = str[i];

	return (cpy);
}
